#include<iostream>
#include<algorithm>
using namespace std;
int maximum(int arr[],int a,int i){
    if(i==12) return a;
  maximum(arr,max(a,arr[i]),i+1);
 




}
int main(){
    int arr[]={1,2,3,5,7,0,8,4,100,3,2,4};
    int a=arr[0];
    int i=1;
    cout<<maximum(arr,a,i);
}