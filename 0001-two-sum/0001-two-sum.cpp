class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){

            // int toFind=target-nums[i];
            // if(m.find(toFind)!=m.end()){
            //     return {i,m[toFind]};
            // }else m[nums[i]]=i;

            int toFind=target-nums[i];
            if(m.find(toFind)!=m.end()){
                return {i,m[toFind]};
            }else m[nums[i]]=i;
        }
        return {};
    }
};