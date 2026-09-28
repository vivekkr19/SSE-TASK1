// to find the first occ of x in the array 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,2,2,3,3,3,3,3,3,4,4,5};
    int target=6;
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int high=n-1;
    while(lo<=high){
        int mid=lo+(high-lo)/2;
        if(arr[mid]==target){
            if(arr[mid-1]!=target){
                cout<<mid;
                break;
            }
            else high=mid-1;

        }
        else if(arr[mid]<target) lo=mid+1;
        else high=mid-1;

    }

}