#include<iostream>
#include<vector>
using namespace std;
  void merge(vector<int>&a,vector<int>&b,vector<int>&res){
    int i=0;
    int j=0;
    int k=0;
    
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) {
        res[k++]=a[i++];
        }
        else{
            res[k++]=b[j++];
        }
    }
    if(i==a.size()){
        while(j<b.size()){
            res[k++]=b[j++];
        }
    }
    else if(j==b.size()){
         while(i<a.size()){
            res[k++]=a[i++];
        }
    }

  


}

void mergesort(vector<int>&v){
    int n=v.size();
    if(n<=1 ) return;
    //int n=v.size();
    int n1=n/2;
    int n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
      for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergesort(a);
    mergesort(b);
    merge(a,b,v);
   


}
int main(){
    vector<int>v={1,4,6,8,4,9,0,7,8};
    mergesort(v);
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    


}