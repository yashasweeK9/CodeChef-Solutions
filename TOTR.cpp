#include <bits/stdc++.h>
using namespace std;
#define Yashaswee ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
int main() {
    Yashaswee;
    int tc;
    string code;
    cin >> tc >> code;
    char char_array[26 + 1];
    strcpy(char_array,code.c_str());
    while(tc--) {
        string inp;
        string out;
        cin >> inp;
        for(int i=0;i<inp.length();i++) {
            char a = inp.at(i);
            if(a>=97) {
                out += char_array[a-97];
            }
            else if(a>=65 && a<=90) {
                out += (char)((char_array[a-'A'])-32);
            }
            else {
                if(a=='_')
                out+=" ";
                else
                out += a;
            }
        }
        cout << out << "\n";
    }
    return 0;
}