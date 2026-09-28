#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<3;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.begin());
    int count=0;
    while(v[2]-v[0]>=0){
        if(v[2]==v[1]||v[1]==v[0]){
            cout<<count;
            break;
        }
        v[2]--;
        v[0]++;
        count++;

        
    }
}