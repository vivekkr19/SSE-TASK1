#include<iostream>
#include<algorithm>
using namespace std;
void mazepath(int maxc,int maxr,int a, int b,string s){
    static int count =1;
    if(a==maxc && b==maxr){
        cout<<count<<" - "<<s;
        count++;
        cout<<endl;
        return;
    }
    if(a==maxc) mazepath(maxc,maxr,a,b+1,s+'r');
    else if (b==maxr) mazepath(maxc,maxr,a+1,b,s+'d');
    else{ 
     mazepath(maxc,maxr,a+1,b,s+'d');
     mazepath(maxc,maxr,a,b+1,s+'r');
    
    // mazepath(maxc,maxr,a,b+1,s+'d');


}
}
int main (){
    int maxr=3;
    int maxc=3;
    
    mazepath(maxc,maxr,1,1,"");
}