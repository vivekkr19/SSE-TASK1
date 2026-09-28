#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,3,4,8,9,12};
     int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int high=n-1;
    while(lo<=high){
        int mid=lo+(high-lo)/2;
        if(arr[mid]!=mid && arr[mid-1]==mid-1){
            cout<<arr[mid-1]+1;
            break;
        }
        if(arr[mid]==mid && arr[mid+1]!=mid+1){
            cout<<arr[mid]+1;
            break;
        }
        else if(arr[mid]==mid)lo=mid+1;
        else high=mid-1;

}
}