#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
     int arr[]={5,4,3,8,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    float kmin=(float)(INT_MIN);
    float kmax= (float)(INT_MAX);
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            kmin=max(kmin,(arr[i]+arr[i+1])/2.0f);
        }
        else {
            kmax=min(kmax,(arr[i]+arr[i+1])/2.0f);
        }
    }
    cout<<"range of k is "<<"("<<kmax<<","<<kmin<<")";
}
