//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
        int get_bit=(num & (1<<(i-1)));
        if(get_bit==0){
            cout<<"0";
        }else{cout<<"1";}
        
        int set_bit=(num | (1<<(i-1)));
        cout<<" "<<set_bit;
        
        int clear_bit=(num & ~(1<<(i-1)));
        cout<<" "<< clear_bit;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends