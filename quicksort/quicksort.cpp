#include <bits/stdc++.h>
using namespace std;
int partition( int arr[],int si, int ei){
    int counts=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<arr[si]) counts++;
    }
    swap(arr[si],arr[si+counts]);
    int pi=si+counts;
    int i=0;
    int j=0;
    while(i<pi || j>pi){
        if(arr[i]<arr[pi]) i++;
        if(arr[j]>arr[pi]) j--;
        else if(arr[i]>arr[pi]  && arr[j]<arr[pi]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pi;

}
void qs(int arr[],int si, int ei){
    if(si>=ei) return;
    int pi= partition(arr,si,ei);
    qs(arr,si,pi-1);
    qs(arr,pi+1,ei);
}
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    qs(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}