#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={19,12,23,8,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n,0);
    int idx = 0;
    for(int i=0;i<n;i++){
        int b=INT_FAST16_MAX;
        int c=-1;
        for(int j=0;j<n;j++){
        if(arr[j]<b && v[j]!=1){
            b=arr[j];
            c=j;
        }
    }
        arr[c]=idx;
        v[c]=1;
    idx++;
}
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}