class Solution {
  public:
  
  void generate_permute(string s,vector<string> &pre_ans,int idx=0){
      if(idx==s.size()){
          pre_ans.push_back(s);
          return;
      }
      
      for(int i=idx;i<s.size();i++){
          swap(s[i],s[idx]);
          generate_permute(s,pre_ans,idx+1);
          swap(s[i],s[idx]);
      }
  }
    vector<string> findPermutation(string &s) {
        
        vector<string> pre_ans;
        vector<string> ans;
        set<string> st;
        
        generate_permute(s,pre_ans);
        
        for(auto && i : pre_ans){
            st.insert(i);
        }
        
        for(auto && i:st){
            ans.push_back(i);
        }
        
        return ans;
        
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna