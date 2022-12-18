#include <bits/stdc++.h>
using namespace std;
#define Yashaswee ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    long long int dp[101]={0};
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<=100;i++) {
        dp[i] = i*dp[i-1];
        cout << i << ": " << dp[i] << "\n";
    }
    int TC;
    cin >> TC;
    while(TC--) {
        int x;
        cin >> x;
        cout << dp[x] << "\n";
    }
}