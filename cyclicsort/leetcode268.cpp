class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
    
        
        int a=-1;
        int i=0;
        //by the cyclic sort
        while(i<n){
            if(nums[i]==n){
                a=i;
                i++;
                }
                else if(nums[i]!=i){
                    swap(nums[i],nums[nums[i]]);

                }
                else i++; 
        }
        if(a==-1){
            return n;
        }
        else return a;
    }
        
};