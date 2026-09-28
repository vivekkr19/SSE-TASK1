#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subset(string original,string ans,int i,vector<string>&v){
    if(i==original.size()){
        v.push_back(ans);
      
    }
    char ch= original[i];
    subset(original,ans+ch,i+1,v);
    subset(original,ans,i+1,v);
}
int main(){
    string s="abc";
    vector<string>v;
    string str;
    int i=0;
    subset(s,str,i,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
// #include<iostream>
