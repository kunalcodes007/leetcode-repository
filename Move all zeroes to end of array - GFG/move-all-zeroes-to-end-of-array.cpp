//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	   // for(int i=0;i<n;i++){
	   //     if(arr[i]==0){
	   //         swap(arr[i],arr[n-1]);
	   //     }
	   // }
	  
  int insertnonzeroelement=0;
  
  for(int i=0;i<n;i++){
      if(arr[i]!=0){
          arr[insertnonzeroelement]=arr[i];
          insertnonzeroelement++;
      }
      
  }
  while(insertnonzeroelement < n){
      arr[insertnonzeroelement]=0;
      insertnonzeroelement++;
  }
	   
	
}};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends