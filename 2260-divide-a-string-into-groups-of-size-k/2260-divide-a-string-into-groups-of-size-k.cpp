class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {

        vector<string> ans;
        int n = s.size();

        int toBeFilled = (k - (n % k));

        if (toBeFilled != k) {
            while (toBeFilled--)
                s.push_back(fill);
            toBeFilled = (k - (n % k));
            n += toBeFilled;
        }

        for (int i = 0; i < n; i += k) {
            string ss = "";
            for (int j = i; j < i + k; j++) {
                ss += s[j];
            }
            ans.push_back(ss);
        }

        return ans;
    }
};