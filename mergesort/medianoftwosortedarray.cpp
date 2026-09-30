class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int i=0;
       int j=0;
       int t=0;
       int n=nums1.size()+nums2.size();
       vector<int>v(n);
       while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<nums2[j]){
            v[t]=nums1[i];
            i++;
        }
        else { v[t]=nums2[j];
            j++;
        }
        t++;
          }
          if(i==nums1.size()){
            for(int a=j;a<nums2.size();a++){
                v[t]=nums2[a];
                t++;
            }
          }
          else if(j==nums2.size()){
            for(int a=i;a<nums1.size();a++){
                v[t]=nums1[a];
                t++;
            }
          }
          if(n%2==0){
            return (v[n/2]+v[(n/2)-1])/2.0;
          }
          else return v[n/2];
        



       }

};