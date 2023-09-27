#include <bits/stdc++.h>
using namespace std;

int count(const string & d1, const string & d2) {
    int L1 = d1.length();
    int L2 = d2.length();
    vector<vector<int>> dp(L1 + 1, vector<int>(L2 + 1));
    
    for (int i = 0; i <= L1; i++) {
        for (int j = 0; j <= L2; j++) dp[i][j] = 0;
    }

    for (int i = 0; i <= L1; i++) {
        for (int j = 0; j <= L2; j++) {
            if (i == 0 || j == 0)  dp[i][j] = i + j;
            else if (d1[i - 1] == d2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + 1;
        }
    }
    
    return dp[L1][L2];
}

int main() {
    int q;
    cin>>q;
    cin.ignore();  

    while (q--) {
        string name;
        getline(cin, name);
        int s=name.length();

        int pos = -1;
        for (int i = 0; i < s; i++) {
            if (name[i] == ' ') {
                pos = i;
                break;
            }
        }

        string D1, D2;
        if (pos != -1) {
            D1 = name.substr(0, pos);
            D2 = name.substr(pos + 1);
        } else {
            D1 = name;
            D2 = "";
        }

        cout<<count(D1, D2)<< endl;
    }

    return 0;
}