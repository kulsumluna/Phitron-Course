#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool Unbounded_Knapsack(int a[], int n, int Marks) {
    if (n == 0) return Marks == 0;
    if (dp[n][Marks] != -1) return dp[n][Marks];

    if (a[n - 1] <= Marks) {
        dp[n][Marks] = Unbounded_Knapsack(a, n, Marks - a[n - 1]) || Unbounded_Knapsack(a, n - 1, Marks);
    } else {
        dp[n][Marks] = Unbounded_Knapsack(a, n - 1, Marks);
    }
    
    return dp[n][Marks];
}

int main() {
    int q;
    cin>>q;
    while (q--) {
        int a, b;
        cin>>a>>b;
        int arr[a];

        for (int i = 0; i < a; i++) cin>>arr[i];
        
        int Marks = 1000 - b; 
        for (int i = 0; i <= a; i++) {
            for (int j = 0; j <= Marks; j++) dp[i][j] = -1; 
        }
        
        if (Unbounded_Knapsack(arr, a, Marks)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
