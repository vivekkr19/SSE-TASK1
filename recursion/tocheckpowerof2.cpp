#include<iostream>
using namespace std;
int sum(int a , int b){
    if(a%2==0)a++;
    if(b%2==0)b--;
    if(b<=a) return a;
   return b+sum(a,b-2);
}
// bool check(int n){
//     if(n==1) return true;
//     if(n%2!=0) return false;
//     check(n/2);
// }


//Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
//recursion.

int main(){
    int a;
    cout<<"enter the number a:";
    cin>>a;
    int b;
    cout<<"enter the number b:";
    cin>>b;
   cout<<sum(a,b);

}
