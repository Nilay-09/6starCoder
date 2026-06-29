#include <bits/stdc++.h>
using namespace std;

class Solution {
    struct Node {
        int next[26];
        int fail;
        vector<int> out;

        Node() {
            memset(next, -1, sizeof(next));
            fail = 0;
        }
    };

public:
    int numOfStrings(vector<string>& patterns, string word) {

        vector<Node> trie(1);

        // Build Trie
        for (int i = 0; i < patterns.size(); i++) {
            int node = 0;
            for (char c : patterns[i]) {
                int x = c - 'a';
                if (trie[node].next[x] == -1) {
                    trie[node].next[x] = trie.size();
                    trie.emplace_back();
                }
                node = trie[node].next[x];
            }
            trie[node].out.push_back(i);
        }

        // Build Failure Links
        queue<int> q;

        for (int c = 0; c < 26; c++) {
            if (trie[0].next[c] == -1)
                trie[0].next[c] = 0;
            else {
                trie[trie[0].next[c]].fail = 0;
                q.push(trie[0].next[c]);
            }
        }

        while (!q.empty()) {
            int v = q.front();
            q.pop();

            for (int c = 0; c < 26; c++) {
                if (trie[v].next[c] == -1) {
                    trie[v].next[c] = trie[trie[v].fail].next[c];
                } else {
                    int u = trie[v].next[c];
                    trie[u].fail = trie[trie[v].fail].next[c];

                    for (int x : trie[trie[u].fail].out)
                        trie[u].out.push_back(x);

                    q.push(u);
                }
            }
        }

        vector<bool> found(patterns.size(), false);

        int node = 0;
        for (char c : word) {
            node = trie[node].next[c - 'a'];

            for (int id : trie[node].out)
                found[id] = true;
        }

        return count(found.begin(), found.end(), true);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna