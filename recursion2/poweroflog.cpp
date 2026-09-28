#include<iostream>
using namespace std;
int power(int x, int n){

    int ans=1;
    if(n==1) return x;
    if(n%2==0){
       ans=power(x,n/2);
       return ans*  ans; 


    }
    else{
       ans=power(x,(n-1)/2);
       return x*ans*ans;



    } 
    
}

   
  
   int main(){
    int a;
    cout<<"enter the number a:";
    cin>>a;
     int b;
    cout<<"enter the number b:";
    cin>>b;
    cout<<power(a,b);

}