#include<iostream>
#include<string>
using namespace std;
void subset(string original,string ans,int i,bool flag){
    if(i==original.size()){
        cout<<ans<<" ";
        return;
       
    }
     char x=original[i];
    if(i+1==original.size()){
       if(flag) subset(original,ans+x,i+1,true);
        subset(original,ans,i+1,true);
    }
    
   else if(original[i]==original[i+1]){
          if(flag) subset(original,ans+x,i+1,false);
        subset(original,ans,i+1,false);
    }
    else {
          if(flag) subset(original,ans+x,i+1,true);
        subset(original,ans,i+1,true);

    }

  }
    
int main(){
    string s="abbccd";
    string str;
    bool flag = true;
    int i=0;
    subset(s,str,i,flag);
}