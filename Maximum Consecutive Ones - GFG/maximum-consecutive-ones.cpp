//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestOnes(int n, vector<int>& nums, int k) {
        
        int zerocount=0;
        int left=0;
        int answer=0;
        
        for(int right=0;right<nums.size();right++){
            
            if(nums[right]==0){
                zerocount++;
            }
        while(zerocount > k){
            if(nums[left]==0)
            zerocount--;
            left++;
        }
        
        answer=max(answer,right-left+1);
            
        }
        return answer;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.longestOnes(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends