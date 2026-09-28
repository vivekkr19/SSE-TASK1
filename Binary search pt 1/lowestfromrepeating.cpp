#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,2,3,3,3,3,3,3,3,3,4,5,6};
    int n =sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=n-1;
    int mid;
    int target=2;
    bool found = true;
    while(low<=high){
         mid = low+(high-low)/2;
         if(mid==target){
            found=false;
           if(arr[mid-1]!=target){
            cout<<mid;
            break;
           }
           else high= mid-1;
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