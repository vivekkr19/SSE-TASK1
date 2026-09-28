#include<iostream>
using namespace std;
void print (string original, string ans, int i){
    if(i==original.length()){
    cout<<ans;
    return;
    }
    char x;
    x=original[i];
 if ( x=='v'){
    print(original,ans,i+1);
 }
 else {
    print (original,ans+x,i+1);
 }
}



int main(){
    string s="vivek kumar";
    string str;
    int i=0;
    print(s,str,i);

}
