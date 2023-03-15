//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long maxScore(vector<int> &cardPoints, int N, int k) {
        
            //initialize a vector.
   vector<int>sum(cardPoints.size(),0);
   int Sum=0;
//initialize value for each index
   for(int i=0;i<cardPoints.size();i++){
       Sum+=cardPoints[i];
       sum[i]=Sum;
   }

   if(cardPoints.size()==k){
       return Sum;
   }

   //create a sliding window

   int score=0,ans=0;

   for(int i=0;i<=k;i++){
         int j=i+cardPoints.size()-k-1;
         if(i == 0){
             ans=sum[j];
         }else{
             ans=sum[j]-sum[i-1];
         }

         score=max(score,Sum-ans);
   }
return score;
        
        
        
        
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, k;
        cin >> N >> k;

        vector<int> cardPoints(N);
        for (int i = 0; i < N; i++) cin >> cardPoints[i];

        Solution obj;
        cout << obj.maxScore(cardPoints, N, k) << endl;
    }
    return 0;
}
// } Driver Code Ends