#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool knapsack (int m[], int N, int s) {
    if (N == 0) return s == 0;
    if (dp[N][s] != -1) return dp[N][s];
    if (m[N - 1] <= s) dp[N][s] = knapsack(m, N - 1, s - m[N - 1]) || knapsack(m, N - 1, s);
    else dp[N][s] = knapsack(m, N - 1, s);
    return dp[N][s];
}

int main() {
    int T;
    cin>>T;
    while (T--) {
        int N, M;
        cin>>N>>M;
        int marks[N];
        for (int i = 0; i < N; i++) cin>>marks[i];
        int size = 1000 - M;
        for (int i = 0; i <= N; i++) {
            for (int j = 0; j <= size; j++) dp[i][j] = -1;
        }
        if (knapsack(marks, N, size)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}