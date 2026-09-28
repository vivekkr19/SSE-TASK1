#include<iostream>
using namespace std;
// void greeting(){
//     cout<<"radhe radhe"<<endl;;

// }
void counting(int n){
    if(n==0) return ;
    cout<<n<<" ";
    counting(n-1);
    cout<<n<<" ";

}

    
   
   

// void greeting(){
//     cout<<"radhe radhe";

// }

int main(){
    
    int b;

    cout<<"enter the number b ";
    cin>>b;
    counting(b);

    // int a;

    // cout<<"enter the number a ";
    // cin>>a;
    // cout<<counting(a,b);
    


}