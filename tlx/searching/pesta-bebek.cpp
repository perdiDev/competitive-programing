#include <bits/stdc++.h>
using namespace std;

#define cpyook ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"

int main() {
    cpyook
    int n; cin >> n;
    vector<string> tamu, cp;

    vector<string>::iterator it;
    while(n--) {
        string nama;
        cin >> nama;
        tamu.push_back(nama);

        sort(tamu.begin(), tamu.end());
        it = find(tamu.begin(), tamu.end(), nama);

        cout << it-tamu.begin()+1 << endl;
    }
    
    return 0;
}