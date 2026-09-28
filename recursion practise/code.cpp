#include<iostream>
using namespace std;
void concept(string s, string str,int i){
    if(i==s.size()){
     cout<<str;
     cout<<endl;
     return;
    } 
    concept(s,str+s[i],i+1);
     concept(s,str,i+1);


}
int main(){
    string s  = "abc";
    string str;
    int i=0;
    concept(s,str,i);
    // cout<<s;
    // cout<<str;


}