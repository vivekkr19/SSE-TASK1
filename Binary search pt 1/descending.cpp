#include<iostream>
using namespace std;
int fact(int a){
    int f=1;
    for(int i=1;i<=a;i++){
        f=f*i;
    }
    return f;

}
int main(){
    int a= fact(12);
    int b=fact(3);
    int c= fact(9);
    cout<<a/(b*c);
}
   

    // int x=2;
    // int n= sizeof(arr)/sizeof(arr[0]);
    // int lo=0;
    // int high=n-1;
    // while(lo<=high){
    //     int mid=(lo+high)/2;
    //     if(x==arr[mid]){
    //         cout<<arr[mid];
    //         break;
            
    //     }
    //     else if(arr[mid]<x) high=mid-1;
    //     else lo=mid+1;
            
            

    //     }

    


    
