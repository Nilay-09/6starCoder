vector<int> bucket[256]; 
void radix_sort(vector<int>& nums) {
    auto [m, M]=minmax_element(nums.begin(), nums.end());
    unsigned xrange=*M-*m+1;
    int round = max(1, int(32-countl_zero(xrange)+7)/8), xmin=*m;
    // 0th round
    for (int& x : nums) {
        x-=xmin; //Adjust x by xmin
        bucket[x & 255].push_back(x);
    }
    int i = 0;
    for (auto& B : bucket) {
        for (auto v : B)
            nums[i++] = v+(round==1?xmin:0);
        B.clear();
    }

    // Rounds from 1st to (round-2)th round
    for (int rd=1; rd < round-1; rd++) {
        int shift=rd*8; // Bit shifting to extract the next set of 8 bits
        for (auto& x : nums)
            bucket[(x >> shift) & 255].push_back(x);

        i=0;
        for (auto& B : bucket) {
            for (auto& v : B)
                nums[i++] = v;
            B.clear(); // Clear bucket after usage
        }
    }
    // Last round
    if (round > 1) {
        int shift =8* (round-1); // Bit shifting for the last round
        for (auto& x : nums)
            bucket[x >> shift].push_back(x);

        i=0;
        for (auto& B : bucket) {
            for (auto& v : B)
                nums[i++] =v+xmin; // Adjust x back by adding xmin
            B.clear();             // Clear bucket after usage
        }
    }
}
class Solution {
public:
    static long long countBadPairs(vector<int>& nums) {
        const int n=nums.size();
        long long cnt=n*(n-1LL)/2;
        for(int i=0; i<n; i++)
            nums[i]-=i;
        radix_sort(nums);
        long long f=1;
        for(int r=1; r<n; r++){
            if (nums[r]==nums[r-1]) f++;
            else{
                cnt-=f*(f-1)/2;
                f=1;
            }
        }
        return cnt-f*(f-1)/2;
    }
};
auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();