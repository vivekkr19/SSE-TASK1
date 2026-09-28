#include<iostream>
using namespace std;
int main(){
int arr[5][5]={1,4,7,11,15,2,5,8,12,19,3,6,9,16,12,10,13,14,17,24,18,21,23,26,30};
int minr=0;
int maxc=4;
int target=18;
while(minr<=4 && maxc>=0){
 if(arr[minr][maxc]==target){
 cout<<arr[minr][maxc];
 break;
}
 else if(arr[minr][maxc]<target){
    minr++;
 }
 else maxc--;
}

}









