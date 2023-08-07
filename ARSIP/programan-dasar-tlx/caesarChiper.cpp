#include <bits/stdc++.h>
using namespace std;

string S;
int k,enk;
int netral = 'a';

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> S >> k;
    
    int ln = S.length();

    for(int i=0;i<ln;i++){
        enk = S[i] - netral;
        enk += k;
        enk %= 26;
        enk += netral;
        S[i] = enk;
    }

    cout << S;

    return 0;
}