class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        int k=0;
       vector<int> nums3(m+n,0);
         if (n == 0)
            return;
        while(i<m && j<n){

        if(nums1[i]<nums2[j]){
              nums3[k] = nums1[i];
            i++;
            k++;
        }else{
               nums3[k] = nums2[j];
            j++;
            k++;
            
        }
            
        }
        while(i<m){
            
          nums3[k] = nums1[i];
            i++;
            k++;
        }
        while(j<n){
   nums3[k] = nums2[j];
        j++;
            k++;
        } nums1 = nums3;
    }
};