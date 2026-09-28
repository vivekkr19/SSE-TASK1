#include <bits/stdc++.h>
using namespace std;
int partition( int arr[],int si, int ei, int k){
    int counts=0;
    //int pi=(si+ei)/2;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<arr[(si+ei)/2]) counts++;
    }
    swap(arr[(si+ei)/2],arr[counts]);
   
    int i=0;
    int j=0;
    while(i<counts || j>counts){
        if(arr[i]<arr[counts]) i++;
        if(arr[j]>arr[counts]) j--;
        else if(arr[i]>arr[counts]  && arr[j]<arr[counts]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return counts;

}
void qs(int arr[],int si, int ei, int k){
    if(si>=ei) return;
    int pi= partition(arr,si,ei,k);
    qs(arr,si,pi-1,k);
    qs(arr,pi+1,ei,k);
}
int main(){
    // int k;
    // cout<<"enter the number";
    // cin>>k;
    int k=0;
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    qs(arr,0,n-1,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}