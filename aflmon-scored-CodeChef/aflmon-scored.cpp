#include <bits/stdc++.h>

using namespace std;

int less_count(vector < int > & v, int n, int idx) {

    int less_total = 0;
    int high_total = 0;
    for (int i = 0; i < n; i++) {
        if (i == idx) continue;
        if (v[i] <= v[idx]) less_total++;
        else high_total++;
    }
}

int main() {
    // your code goes here
    int T;
    cin >> T;

    while (T--) {

        int n;
        cin >> n;

        std::vector < int > v(n);

        for (auto && i: v) cin >> i;

        int total = 0;
        for (int i = 0; i < n; i++) {
            
            int less_total = 0;
            int high_total = 0;
            
            for (int ii = 0; ii < n; ii++) {
                if (ii == i) continue;
                if (v[ii] <= v[i]) less_total++;
                else high_total++;
            }
            if (less_total >= high_total) total++;
        }

        cout << total << endl;


    }

}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna