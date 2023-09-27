#include <iostream>
#include <vector>
using namespace std;
const int MAX_N = 100001; // Maximum possible value of N
int main() {
    int T;
    cin >> T;
    
    vector<int> dp(MAX_N, 0);
    dp[1] = 1; // You can reach 1
    
    // Precompute reachable numbers using dynamic programming
    for (int i = 1; i < MAX_N; i++) {
        if (dp[i]) {
            if (i + 3 < MAX_N) dp[i + 3] = 1; // Add 3
            if (i * 2 < MAX_N) dp[i * 2] = 1; // Multiply by 2
        }
    }

    while (T--) {
        int N;
        cin >> N;

        if (dp[N]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}