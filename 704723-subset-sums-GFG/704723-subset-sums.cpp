class Solution {
  public:
  
    void getAllSubsetSum(vector<int> &arr,vector<int> &ans,int &sum,int idx){
        
        if(idx==arr.size()){
            ans.push_back(sum);
            return;
        }
        
        getAllSubsetSum(arr,ans,sum,idx+1);
        
        sum+=arr[idx];
        getAllSubsetSum(arr,ans,sum,idx+1);
        sum-=arr[idx];
        
    }
  
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        
        vector<int>ans;
        vector<int>temp;
        int sum=0;
        getAllSubsetSum(arr,ans,sum,0);
        
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna