#include<iostream>
#include<string>
using namespace std;
void subset(string original,string ans,int i){
    if(i==original.size()){
        cout<<ans<<" ";
        // return;
    }
    char ch= original[i];
    subset(original,ans+ch,i+1);
    subset(original,ans,i+1);
}
int main(){
    string s="abcd";
    string str;
    int i=0;
    subset(str,s,i);
}