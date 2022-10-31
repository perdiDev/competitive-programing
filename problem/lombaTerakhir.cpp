#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ln = s.length();
    int munculO = 0;
    for(int i=0;i<ln; i++){
        if(s[i] == 'O')
            munculO++;
    }

    if(munculO == 1)
        cout << "Ya" << "\n";
    else
        cout << "Tidak" << "\n";

    return 0;
}