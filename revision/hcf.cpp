
#include<iostream>
#include<string>
#include<vector>

#include<cmath>
#include<algorithm>
using namespace std;
int a=1;
int b=0;
char x;

int main(){
    string s = "bbbbacccccc";
    sort(s.begin(),s.end());
    // vector<int>v(26,0);
    for(int i=0;i<s.size()-1;i++){
       if(s[i]==s[i+1]){
        a++;
       }
       else {
        if(b<a){
            b=a;
            a=1;
            x=s[i];

        }
        else a=1;
       }
     }
      if(b<a){
        b=a;
        x=s[s.size()-1];
    }





    cout<<x<< " "<<b;
}