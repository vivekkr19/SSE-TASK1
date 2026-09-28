#include<iostream>
using namespace std;


int maxi(int arr[],int n,int i){
    static int a=0;
     if(i==n-1) return arr[i];
      return a+ maxi(arr,n,i+1);
}

    
    int main(){
        int arr[]={1,2,3,4,5,6,7};
        int n=sizeof(arr)/sizeof(arr[0]);
        int i=0;
        cout<<maxi(arr,n,i);
    }
