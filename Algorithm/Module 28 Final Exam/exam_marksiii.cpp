#include <bits/stdc++.h>
using namespace std;

int minmarks(int a[], int n, int m) {
    vector<int> dp(m + 1, INT_MAX - 1);
     dp[0] = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j] <= i) {
                dp[i] = min(dp[i], 1 + dp[i - a[j]]);
            }
        }
    }

    return dp[m] == INT_MAX - 1 ? -1 : dp[m];
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        int a,b;
        cin >> a >> b;
        int arr[a];

        for (int i = 0; i < a; i++)
        {
           cin >> arr[i];
        } 
         int ans = minmarks(arr, a, 1000 - b);
        cout << ans<< endl;
    }

    return 0;
}