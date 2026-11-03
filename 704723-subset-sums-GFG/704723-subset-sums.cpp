class Solution {
  public:
  
    void getAllSubsetSum(vector<int> &arr,vector<int> &ans,vector<int> &temp,int idx){
        
        if(idx==arr.size()){
            ans.push_back(accumulate(temp.begin(),temp.end(),0));
            return;
        }
        
        getAllSubsetSum(arr,ans,temp,idx+1);
        
        temp.push_back(arr[idx]);
        getAllSubsetSum(arr,ans,temp,idx+1);
        temp.pop_back();
        
    }
  
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        
        vector<int>ans;
        vector<int>temp;
        getAllSubsetSum(arr,ans,temp,0);
        
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna