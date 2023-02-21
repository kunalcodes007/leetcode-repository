//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        stack<string>temp;
        string s="";
     
       for(int i=0;i<S.size();i++){
           if(S[i]!='.'){
               s+=S[i];
           }if(S[i]=='.'){
               temp.push(s);
               s="";
           }
       }
       temp.push(s);
       string result="";
       while(!temp.empty()){
           string str=temp.top();
           temp.pop();
           result+=str+".";
      
       } result.pop_back();
     return result;
    }
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends