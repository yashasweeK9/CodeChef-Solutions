#include <bits/stdc++.h>
using namespace std;
#define Yashaswee ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    Yashaswee;
    int Tc;
    cin >> Tc;
    while(Tc--) {
        long int n;
        cin >> n;
        long int arr[n]={0};
        long int loopControl = 0;
        long int counter = 0;
        while(loopControl<=n) {
            long int element;
            cin >> element;

            if(element>=arr[counter]) {
                counter++;
                arr[counter] = element;
            }
            
            else {
                long int l = 0;
                long int u = counter;
                long int index=0;
                while(l<u) {
                    long int p = (l+u)/2;
                    if(l==u)
                        index = p;
                    else if(arr[p]>element)
                        u = p-1;
                    else if(arr[p]=element)
                        l = p+1;
                    else
                        l = p+1;
                    }
                    arr[index] = element;
                }
                loopControl++;
            }
            cout << "I reached Here" << "\n";
            for(int io=0;io<=counter;io++) {
                cout << arr[io] << " ";
            }
            cout << "\n";
            return 0;
    }
}