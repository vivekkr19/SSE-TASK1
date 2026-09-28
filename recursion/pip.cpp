
#include<iostream>
using namespace std;
  void  pip(int n){
    if(n==0) return;
    cout<<(n)<<" ";
    pip(n-1);
    cout<<(n)<<" ";
     pip(n-1);
      cout<<(n)<<" ";
  }
    int main(){
    int n;
    cout<<"enter the number : " ;
    cin>>n;
    pip(n);
    
        

    }
