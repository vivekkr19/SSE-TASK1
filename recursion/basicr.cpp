#include<iostream>
using namespace std;
void greeting(){
    cout<<"radhe radhe"<<endl;;

}
int factorial(int n){
   int f=1;
   for(int i=1;i<=n;i++){
    f*=i;
    cout<<f<<endl;
    greeting();
   }
   
}
// void greeting(){
//     cout<<"radhe radhe";

// }

int main(){
    int n;

    cout<<"enter the number";
    cin>>n;
    factorial(n);
    greeting();


}