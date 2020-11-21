#include <bits/stdc++.h>
#define Yashaswee ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

long long int gcd(long long int a, long long int b) { 
    if(b==0) return a;
    else return gcd(b,a%b);
}

int main(){ 
    Yashaswee;
    long long int tc;
    cin >> tc;
    while(tc--) {
        long long int n,a,b,k;
        cin >> n >> a >> b >> k;
        int lcm = a*b/gcd(a,b);
        int count1 = n/a;
        int count2 = n/b;
        int count3 = n/lcm;
        if(((count1+count2)-2*count3)>=k) cout << "Win\n";
        else cout << "Lose\n"; 
    }
}