class Solution {
  public:
  
    void getAllSubsetHavingTargetSum(vector<int> &arr,vector<int>&ans,int sum,int idx,int target){
        
        if(idx==arr.size()){
            if(sum==target) ans.push_back(sum);
            return;
        }
        
        // Dont Include
        getAllSubsetHavingTargetSum(arr,ans,sum,idx+1,target);
        
        // Include
        getAllSubsetHavingTargetSum(arr,ans,sum+arr[idx],idx+1,target);
        
    }
    int perfectSum(vector<int>& arr, int target) {
        // code here
        vector<int>ans;
        getAllSubsetHavingTargetSum(arr,ans,0,0,target);
        return ans.size();
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna