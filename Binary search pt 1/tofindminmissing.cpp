#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,3,4,5,6,7,9,98,100};
    int n =sizeof(arr)/sizeof(arr[0]);
    int a=arr[0];
    // from the linear approach brute force method
    int lo=0;
    int high = n-1;
    int mid;
    bool found = false;
    while(lo<=high){
        mid=(lo+high)/2;
        if(arr[mid]==mid)lo=mid+1;
        else high = mid-1;
    }
    cout<<arr[high]+1;
}
    

          
