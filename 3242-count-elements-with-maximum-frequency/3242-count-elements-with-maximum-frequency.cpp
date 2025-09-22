class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        unordered_map<int, int> freq;
        int mx = 0;
        for (int i : nums) {
            freq[i]++;
            mx = max(mx, freq[i]);
        }
        int sum=0;
        for(auto &[key,value]:freq){
            if(mx==value) sum+=value;
        }

        return sum;
    }
};