#include <bits/stdc++.h>
using namespace std;
#define Yashaswee ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    Yashaswee;
    long int TC;
    cin >> TC;
    while(TC--) {
        long int y;
        cin >> y;
        int counter = 0;
        for(long int divider=5;divider<=y;divider*=5) {
            counter += floor(y/divider);
        }
        cout << counter << "\n";
    }
}