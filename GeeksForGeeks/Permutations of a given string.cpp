//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
     private:
        void solve(string S, vector<string>& ans, int index){
            // Base case
            if(index >= S.size()){
                ans.push_back(S);
                return;
            }
            
            for(int i=index; i<S.size(); i++){
                // Recurison
                swap(S[i], S[index]);
                solve(S, ans, index+1);
                
                // Backtracking
                swap(S[i], S[index]);
            }
        }
	public:
		vector<string> find_permutation(string S)
		{
		    int index = 0;
		    vector<string> ans;
		    solve(S, ans, index);
		    
		    // Make sure no duplicates are there
		    set<string> s;
            for(int i=0;i<ans.size();i++){
                s.insert(ans[i]);
            }          
            ans.clear();
            for(auto x:s){
                ans.push_back(x);
            }
            s.clear();
            return ans;
		}
          
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends
