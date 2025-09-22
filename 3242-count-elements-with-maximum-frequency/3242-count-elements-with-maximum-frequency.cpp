class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        vector<int> arr(105,0);
        
        int mx=0;
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
            mx=max(mx,arr[nums[i]]);
        }
        int sum=0;
        for(int i=0;i<105;i++){
            if(arr[i]==mx){
                sum+=mx;
            }
        }

        return sum;
        
    }
};