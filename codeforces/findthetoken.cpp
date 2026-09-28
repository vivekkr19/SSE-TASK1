#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
     int b;
    cin>>b;
     int c;
    cin>>c;
    int count=0;
    int high=max(a,b);
    int high=max(high,c);
     int lo=min(a,b);
     int lo=min(lo,c);
     while(high-lo>=0){
        if(high==lo){
            cout<<count;
            break;
        }
        high=high-1;
        lo=lo=1;
        
         if(high==a || high==b || high==c ||  low==a ||low==b ||low==c){
            cout<<count;
            break;
        }
       

     }
   


    
}