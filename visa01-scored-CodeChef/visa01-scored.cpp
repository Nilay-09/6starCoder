#include <bits/stdc++.h>
using namespace std;

int lcs_finder(string s1,string s2){
    
    int n=s1.size();
    int m=s2.size();
    
    vector<vector<int>> dp(n+1,
    vector<int>(m+1,0));
    
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    
    return dp[n][m];
}

int main() {
	// your code goes here
	
	int T;
	cin>>T;
	
	while(T--){
	    string s1,s2;
	    cin>>s1>>s2;
	    
	    cout<<lcs_finder(s1,s2)<<endl;
	}

}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna