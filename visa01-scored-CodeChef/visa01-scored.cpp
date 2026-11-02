#include <bits/stdc++.h>
using namespace std;

int lcs_finder( string &s1,string &s2,int i,int j){
    
    if(i==s1.size() || j== s2.size()) return 0;
    
    if(s1[i]==s2[j]){
        return 1+ lcs_finder(s1,s2,i+1,j+1);
    }
     return max(lcs_finder(s1,s2,i+1,j),lcs_finder(s1,s2,i,j+1));
}

int main() {
	// your code goes here
	
	int T;
	cin>>T;
	
	while(T--){
	    string s1,s2;
	    cin>>s1>>s2;
	    
	    cout<<lcs_finder(s1,s2,0,0)<<endl;
	}

}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna