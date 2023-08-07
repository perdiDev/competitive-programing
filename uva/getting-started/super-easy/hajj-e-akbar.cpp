#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    int i=1;
    while(1) {
        cin >> s;
        if(s=="*") break;

        printf("Case %d: ", i++);
        if(s=="Hajj") cout << "Hajj-e-Akbar\n";
        else if(s=="Umrah") cout << "Hajj-e-Asghar\n";
    }

    return 0;
}