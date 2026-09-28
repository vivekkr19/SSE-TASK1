#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={1,3,5,7,10,11,16,20,23,30,34,60};
    int target=25;
    int maxc=3;
    bool flag = false;
    int i=0;
    // for(int i=0;i<3;i++){
    while(i<3){
        if(flag) break;
        
        if(arr[i][maxc]==target){
            flag=true;
            // cout<<arr[i][maxc];
            break;
        }
        else if(arr[i][maxc]<target) i++;
        else {
            int lo=0;
            int high= maxc;
            while(lo<=high){
                int mid=(lo+high)/2;
                if(arr[i][mid]==target){
                    flag=true;
                    // cout<<arr[i][mid];
                      break;
                }
                else if(arr[i][mid]>target) high=mid-1;
                else lo=mid+1;

            }
        }
        i++;
    }
    if(flag) cout<<" no. is present:";
    else cout<<" no. is not present:";
}
    
