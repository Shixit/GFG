//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverseWords(string S) 
    { 
        string result="";
        int n=S.length();
        int start;
        for(int i=n-1;i>=0;i--)
        {
            start = i;
            while(S[i]!='.' && i>=0) i--;
            result += S.substr(i+1,start-i)+".";
        }

        result.pop_back();

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
