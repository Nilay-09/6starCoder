class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {

        int n=nums.size();

        bool lastParity=(nums[0]&1);
        bool ans=1;
        if(n==1) return true;
        if(n==2){
            if((nums[0] &1) == (nums[1] &1)) return false;
            else return true;
        }
        for(int i=1;i<n;i++){
            if(lastParity==(nums[i]&1)) return false;
            else lastParity=(nums[i]&1); 
        }
        return ans;
        
    }
};