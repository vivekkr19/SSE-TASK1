#include<iostream>
#include<string>
#include<vector>
using namespace std;

void subset(int arr[],vector<int>v,int i,int n){

    if(i==n){
       for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
        cout<<endl;
        return;
      
    }

    int a=arr[i];
    subset(arr,v,i+1,n);

   if( v.size()==0 || v[v.size()-1]=arr[i-1]){
    v.push_back(a);
    subset(arr,v,i+1,n);

}
}

int main(){
    int arr[]={1,2,3};
    vector<int>v;
    int i=0;
    int n= sizeof(arr)/sizeof(arr[0]);
 subset(arr,v,i,n);
   
}