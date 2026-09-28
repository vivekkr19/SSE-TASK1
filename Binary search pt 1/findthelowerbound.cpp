#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n =sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=n-1;
    int mid;
    int target=20;
    bool found = true;
    while(low<=high){
         mid = low+(high-low)/2;
         if(mid==target){
           if(arr[mid-1]);
         }
         else if(arr[mid]<target){
            low=mid+1;
         }
         else high=mid-1;


    }
    if(found==true){
        cout<<arr[high];
    }

}