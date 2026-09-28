#include <iostream>
#include <vector>
#include <cmath>
#include <ctime> // Replaced <thread> and <chrono> with basic time headers

// Fallback if M_PI is not defined in <cmath> by your compiler environment
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    // Rotation angles for the donut
    float A = 0;
    float B = 0;

    // Grid dimensions for the terminal display
    const int screen_width = 80;
    const int screen_height = 22;

    // Use ANSI escape codes to clear screen and hide cursor
    std::cout << "\x1b[2J\x1b[?25l";

    while (true) {
        // Buffers initialized for every frame
        std::vector<char> output_buffer(screen_width * screen_height, ' ');
        std::vector<float> z_buffer(screen_width * screen_height, 0.0f);

        // theta steps around the minor circle of the torus (donut thickness)
        for (float theta = 0; theta < 2 * M_PI; theta += 0.07) {
            // phi steps around the major circle of the torus (donut radius)
            for (float phi = 0; phi < 2 * M_PI; phi += 0.02) {

                // Precalculating sines and cosines for optimization
                float sin_phi = sin(phi), cos_phi = cos(phi);
                float sin_theta = sin(theta), cos_theta = cos(theta);
                float sin_A = sin(A), cos_A = cos(A);
                float sin_B = sin(B), cos_B = cos(B);

                // 2D Circle coordinates before rotation
                float circle_x = cos_theta + 2; // 2 is the radius of the donut hole
                float circle_y = sin_theta;

                // 3D coordinate transformations (Rotation math)
                float x = circle_x * (cos_B * cos_phi + sin_A * sin_B * sin_phi) - circle_y * cos_A * sin_B;
                float y = circle_x * (sin_B * cos_phi - sin_A * cos_B * sin_phi) + circle_y * cos_A * cos_B;
                float z = 5 + cos_A * circle_x * sin_phi + circle_y * sin_A; // 5 is distance from camera
                float ooZ = 1.0f / z; // One over Z (depth)

                // Projecting 3D coordinates onto a 2D screen
                int xp = static_cast<int>(screen_width / 2 + 40 * ooZ * x);
                int yp = static_cast<int>(screen_height / 2 + 15 * ooZ * y);

                // Calculating lighting/luminance (Dot product)
                float luminance = cos_phi * cos_theta * sin_B - cos_A * cos_theta * sin_phi - sin_A * sin_theta + cos_B * (cos_A * sin_theta - cos_theta * sin_A * sin_phi);

                // If luminance > 0, the surface is facing the light source
                if (luminance > 0) {
                    if (xp >= 0 && xp < screen_width && yp >= 0 && yp < screen_height) {
                        int position = xp + yp * screen_width;

                        // Z-Buffer check
                        if (ooZ > z_buffer[position]) {
                            z_buffer[position] = ooZ;
                            
                            // Map luminance scale to ASCII characters
                            const char* ascii_shading = ".,-~:;=!*#$@";
                            int luminance_index = static_cast<int>(luminance * 8); 
                            output_buffer[position] = ascii_shading[luminance_index > 0 ? luminance_index : 0];
                        }
                    }
                }
            }
        }

        // Reset cursor to the top-left of the terminal frame
        std::cout << "\x1b[H";

        // Render the fully calculated buffer onto the console screen
        for (int i = 0; i < screen_width * screen_height; ++i) {
            std::cout << output_buffer[i];
            if ((i + 1) % screen_width == 0) {
                std::cout << '\n';
            }
        }

        // Increment rotation angles to spin the torus on the next loop iteration
        A += 0.04f;
        B += 0.02f;

        // Bulletproof delay loop using standard clock ticks (approx. 15ms-30ms frame delay)
        clock_t start_time = clock();
        while (clock() < start_time + CLOCKS_PER_SEC * 0.02) {
            // Actively waits for the duration to maintain framerate safely
        }
    }

    return 0;
}
