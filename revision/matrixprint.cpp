#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int minr=0;
    int minc=0;
    int maxr=3;
    int maxc=3;
    while(minc<=maxc && minr<=maxr){
        // right jane ke liye
        for(int i=minc;i<=maxc;i++){
            cout<<arr[minr][i]<<" ";
            // minr++;
        }
        
         minr++;
        // down jane ke liye
         for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
            // maxc--;
         }
         maxc--;
        //  left jane ke liye
         for(int i=maxc;i>=minc;i--){
            cout<<arr[maxr][i]<<" ";
            // maxr--;
        }
        maxr--;
        // upar jane ke liye
          for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
            // minc++;
        }
         minc++;
        
    }
}



