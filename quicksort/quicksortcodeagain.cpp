//  to find the kth smallest element in it ........
// by reducing the search space 


#include<iostream>
using namespace std;
int a=0;
int partition(int arr[],int si, int ei,int k){
    int pivotelement= arr[(si+ei)/2];
    int counts =0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2)continue;
      else if(arr[i]<pivotelement) counts++;

    }
    int pi=counts+si;
    if(pi+1==k){
    a=1;
    return arr[pi];
    } 

    swap(arr[(si+ei)/2],arr[pi]);
    int i=si;
    int j=ei;
    while(i<pi && j>pi){
        if(arr[i]<pivotelement) i++;
        else if(arr[j]>pivotelement) j--;
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
    }
    


}
return pi;
}

void qs(int arr[],int si, int ei,int k){
    if(si>=ei) return;
    int pi= partition(arr,si,ei,k);
    if(a==1){
        cout<<pi;
        return;
    }  
     if(pi>=k) qs(arr,si,pi-1,k);
    else qs(arr,pi+1,ei,k);

}

int main(){
    int arr[]={1,2,3,4,5,96,7,80,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=8;
    qs(arr,0,n-1,k);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
}