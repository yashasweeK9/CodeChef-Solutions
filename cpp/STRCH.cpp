#include <bits/stdc++.h>
using namespace std;
#define Yashaswee ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void display() { 
    string grid[11][11];
    
    for(int i=1;i<11;i++)
        grid[0][i]="";
    
    for(int i=0;i<11;i++)
        grid[10][i]="^";
    
    for(int i=1;i<11;i++)
        grid[i][0]=">";
    
    for(int i=1;i<11;i++)
        grid[i][10]="<";
    
    for(int i=0;i<11;i++) {
        for(int j=0;j<11;j++) {
            cout << grid[i][j] + " ";
        }
        cout << "\n";
    }

}
int main() {
    display();
}