#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6,7,8,9,9};
int n= sizeof(arr)/sizeof(arr[0]);
int lo=0;
int high = n-1;
int mid;
while(lo<=high){
    mid=(lo+high)/2;
    if(arr[mid]==mid){
        if(arr[mid-1]!=mid-1){
            cout<<arr[mid-1];
            break;
        }
        else high=mid-1;

    }
     if(arr[mid]!=mid){
        if(arr[mid+1]==mid+1){
            cout<<arr[mid+1];
            break;
        }
        else lo= mid+1;
    }



}
}

//  int high=n;
//  int low=0;
//  int mid;
//  bool found=false;
//  while(low<=high){
//      mid=(low+high)/2;
//     if((mid*(mid+1))/2==n){
//         break;
//     }
//     if((mid*(mid+1))/2>n) high=mid-1;
//      if((mid*(mid+1))/2<n) low=mid+1;

//  }
//  if(found==true){
//     cout<<mid;
//  }
//  else cout<<high;
// }