#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    for(int i=1; i<=2001; i++) {
        cin >> s;
        if(s=="#") break;

        printf("Case %d: ", i);
        if(s=="HELLO") cout << "ENGLISH";
        else if(s=="HOLA") cout << "SPANISH";
        else if(s=="HALLO") cout << "GERMAN";
        else if(s=="BONJOUR") cout << "FRENCH";
        else if(s=="CIAO") cout << "ITALIAN";
        else if(s=="ZDRAVSTVUJTE") cout << "RUSSIAN";
        else cout << "UNKNOWN";
        cout << "\n";
    }

    return 0;
}