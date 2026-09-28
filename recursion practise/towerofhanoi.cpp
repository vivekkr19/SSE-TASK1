#include<iostream>
#include<algorithm>
using namespace std;
void toh(int n, char a, char b, char c){
    if(n==0) return;
    toh(n-1,a,c,b);
    cout<<a<<c;
    cout<<endl;
    toh(n-1,b,a,c);

}
int main (){
    int n;
    cout<<" enter the number";
    cin>>n;
   char x='a';
   char y='b';
   char z='c';
  

    toh( n,x,y,z);

   
}
