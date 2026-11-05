class Solution {
public:

    vector<vector<int>> ans;

    void permute(vector<int>& arr,int idx=0){
        if(idx==arr.size()){
            ans.push_back(arr);
            return;
        }
        vector<bool> visited(21,0);
        for(int i=idx;i<arr.size();i++){
            if(visited[arr[i]+10]) continue;

            swap(arr[idx],arr[i]);
            permute(arr,idx+1);
            swap(arr[idx],arr[i]);
            visited[arr[i]+10]=1;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {

        permute(nums,0);
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna