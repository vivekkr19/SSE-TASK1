#include<iostream>
using namespace std;
void concept(string&s, string str,int i){
    if(i==s.length()){
     cout<<s;
     return;
    } 
    if(s[i]!='k'){
        concept(s,str+s[i],i+1);
    }

}
int main(){
    string s  ="my name is vivek kumar";
    string str;
    int i=0;
    concept(s,str,i);

}