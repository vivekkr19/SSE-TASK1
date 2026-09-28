#include<iostream>
using namespace std;
void permutation(string ans, string original,int n){
    if(original.length()==0){
        cout<<ans<<" ";
        return;
    }
    
    for(int i=0;i<original.length();i++){
        char a = original[i];
        if(i==0){
            permutation(ans+a,original.substr(i+1),i+1,n);

        }
        else if(i==n-1){
         permutation(ans+a,original.substr(0,n-1),i+1,n);

        }
        
       else permutation(ans+a,original.substr(0,i)+original.substr(i+1,n-i),i+1,n);
    }
 
}
int main(){
    string s="abc";
    string str;
    int idx=0;
    int n=s.length();
    permutation(str,s,idx,n);
}