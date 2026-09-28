#include<iostream>
using namespace std;
int sum(int n ){
    if(n==1)return 1;
    if(n==2)return 1;
    return sum(n-1)+sum(n-2);
}
  
   int main(){
    int a;
    cout<<"enter the number a:";
    cin>>a;
    cout<<sum(a);

}