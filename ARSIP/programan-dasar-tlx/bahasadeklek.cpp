#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    for(int i=0; i<n; i++) {
        if(s[i] >= 97 && s[i] <= 122) {
            s[i] = s[i] - 32;
        } else {
            s[i] = s[i] + 32;
        }
    }

    cout << s;

    return 0;
}