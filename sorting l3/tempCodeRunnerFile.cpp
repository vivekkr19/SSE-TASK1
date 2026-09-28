#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
int main(){
     int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    float kmin=(float)(INT_MIN);
    float kmax= (float)(INT_MAX);
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[i+1]){
            kmin=max(kmin,(arr[i]+arr[i+1])/2.0);
        }
        else {
            kmax=min(kmax,(arr[i]+arr[i+1])/2.0);
        }
    }
    cout<<"range of k is "<<"("<<kmax<<","<<kmin<<")";
}
