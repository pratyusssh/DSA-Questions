//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        string s=s1+s1;
        if(s.find(s2)!=-1 &&s2.length()==s1.length()){
            return true;
        }
        else{
            return false;
        }
      //the find is used to find the substring present in string and can also return its value,
      //its used here to know if a string after rotation its present in here or not
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends
