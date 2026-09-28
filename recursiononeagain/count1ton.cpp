#include<iostream>
using namespace std;
int print(int a,int b){
    if(a>=b) return b;
    
  
    return a+print(a+2,b);
   
  
   
   }   
   
    


int main(){
    // call of 1 to n 
    int a=2;
    int sum=0;
    int b=180;
    if(a%2==0) a=a+1;
    if(b%2==0) b=b-1;
    cout<<print(a,b);
    

    


}