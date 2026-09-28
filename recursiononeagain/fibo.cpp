//  for any power find the resultant ans;
#include<iostream>
using namespace std;
int pow(int a, int b,int ans){
    if(b==1) return a;
    if(b%2==0){
        ans=pow(a,b/2,ans);
         return ans*ans;
    }
    else {
        ans=pow(a,b/2,ans);
         return a*ans*ans;

    }
}
int main(){
    int a; cin>>a;
    int b; cin>>b;
    int ans=0;
    cout<<pow(a,b,ans);
}
