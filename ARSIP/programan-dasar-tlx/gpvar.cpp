#include  <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    for(int i=1;i<n; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
            s.insert(i, "_");
        }
        else if(s[i] == '_') {
            s.erase(s.begin()+i);
            s[i] = s[i] - 32;
        }
    }

    cout << s;
    return 0;
}