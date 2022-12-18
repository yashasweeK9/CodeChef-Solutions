#include <iostream>
using namespace std;

int main() {

int withdraw;
cin>>withdraw;

double amt;
cin>>amt;

if(amt<=withdraw){
    cout<<amt;
}

else {
    if((withdraw+0.5)<=amt) {
        if(withdraw%5==0)
        cout << amt-(withdraw+0.5);
        else
        cout << amt;
    }
    else
        cout << amt;
 
}
    return 0;
}






