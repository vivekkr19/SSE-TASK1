#include<iostream>
using namespace std;
  int print(int n ){
    static int ans=0;
   if(n<=0) return ans;
//    static int ans=0;
   int ld=n%10;
   ans= ans*10+ld;
//    cout<<b;
//  return;

//   b+=n%10;
//   n=n/10;
  return print(n/10);
}
  
   int main(){
    int a;
    cout<<"enter the number a:";
    cin>>a;
    int sum=0;

    cout<<print(a);

}
