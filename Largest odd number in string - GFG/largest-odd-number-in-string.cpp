//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string s) {
       int flag=-1;
       int n=s.length();
       
       for(int i=n-1;i>=0;i--){
           int num=(int)(s[i]-'0');
           if(num % 2 != 0){
flag=i;
               break;
           }
       }if(flag==-1){
           return "";
       }
       
       string result="";
       for(int i=0;i<=flag;i++){
           result+=s[i];
       }
       return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends