#include<iostream>
using namespace std;
int coordinates(int x,int y ){
    // int a=0;
    // int b=0;
    if(1==x) return 1;
    if(1==y) return 1;
    return coordinates(x-1,y)+ coordinates(x,y-1);
}
  
   int main(){
    int a;
    cout<<"enter the number a:";
    cin>>a;
     int b;
    cout<<"enter the number b:";
    cin>>b;
    cout<<coordinates(a,b);

}