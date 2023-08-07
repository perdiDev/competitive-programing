#include <iostream>
#include <string>
using namespace std;

bool palindrome(string s) {
    int length = s.length();
    string sub;
    if(length == 1) {
        return true;
    }
    else if(length == 2) {
        if(s[0] == s[1]) {
            return true;
        } else {
            return false;
        }
    }
    else {
        sub = s.substr(1, length-2);
        return s[0] == s[length-1] && palindrome(sub);
    }
}

int main() {
    string s;
    cin >> s;

    if(palindrome(s)) {
        cout << "YA";
    } else {
        cout << "BUKAN";
    }

    return 0;
}