#include <bits/stdc++.h>
using namespace std;

string cycle(int c[], int n);
int max(int a, int b); 
string func(int dp[], int size); 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int TC;
    cin >> TC;
    string ans[TC];
    for(int i=0;i<TC;i++) {
        int N,R;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++) {
            int x;
            cin >> x;
            arr[i] = x;
        }
        ans[i] = cycle(arr,N);
    }
    for(int i=0;i<TC;i++) {
        cout << ans[i] << "\n";
    }    
}

int max(int a, int b) {
    return a > b ? a : b;
}

string func(int dp[], int size) {
    int best = 0, sum = 0;
    for (int i=0;i<size;i++) {
        if(dp[i]>sum+dp[i])
            sum = dp[i];
        else
            sum += dp[i];
        if(sum>best)
            best = sum;
    }
    return to_string(best);
}

string cycle(int c[], int size) {
    string sol = func(c,size) + " ";   
    for(int i=0;i<size-1;i++) {
        int x = c[size-1];
        for(int j=size-2;j>=0;j--) {
            int y = c[j];
            c[j]=x;
            x=y;
        }
        c[size-1] = x;
        sol = sol + func(c,size) + " ";
    }
    return sol;
}