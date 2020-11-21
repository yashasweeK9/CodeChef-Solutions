#include <bits/stdc++.h>
using namespace std;
#define Yashaswee ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    
    Yashaswee;
    
    long int c,e;
    cin >> c >> e;
    map<string,string>m;
    map<string,long int>chef;
    map<string,long int>country;
    
    while(c--) {
        string s;
        cin >> s;
        cin >> m[s];
    }
    
    while(e--) {
        string inp;
        cin >> inp;
        chef[inp]++;
        country[m[inp]]++;
    }

    string bestChef;
    long int votes=0;

    for(auto kv:chef) {
        
        if(kv.second>votes) {
            bestChef = kv.first;
            votes = kv.second;
        }

        else if(kv.second==votes) {
            if(bestChef.compare(kv.first)>0) {
                bestChef = kv.first;
                votes = kv.second;
            }
        }
    }

    string bestCountry;
    long int Cvotes=0;
    for(auto kv:country) {
        
        if(kv.second>Cvotes) {
            bestCountry = kv.first;
            Cvotes = kv.second;
        }

        else if(kv.second==Cvotes) {
            if(bestCountry.compare(kv.first)>0) {
                bestCountry = kv.first;
                Cvotes = kv.second;
            }
        }
    }
    
    cout << bestCountry << "\n" << bestChef << "\n";   
}