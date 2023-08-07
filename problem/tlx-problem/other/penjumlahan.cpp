#include <bits/stdc++.h>
using namespace std;

int charToInt(char ch) {
    if(ch >= '0' && ch <= '9') {
        return (0+ch-'0');
    }
    return 0;
}

char intToChar(int i) {
    return i+'0';
}

string reverseString(string s) {
    string temp = s;
    int lengthS = s.length();
    for(int i=0; i<lengthS; i++) {
        s[i] = temp[lengthS-i-1];
    }
    return s;
}

string penjumlahan(string a, string b) {
    int lengthStr = max(a.length(), b.length()), sisa=0,
    aLength = a.length(),
    bLength = b.length();
    string ans;

    for(int i=0; i<lengthStr; i++) {
        int x=0, y=0,tmp;
        if(aLength>i) {
            x = charToInt(a.back()); a.pop_back();
        }
        if(bLength>i) {
            y = charToInt(b.back()); b.pop_back();
        }
        tmp = x+y+sisa;

        if(tmp>9) sisa = tmp/10;
        else sisa = 0;

        ans.push_back(intToChar(tmp%10));
        // cout << intToChar(tmp%10) << "\n";
    }
    if(sisa) ans.push_back(intToChar(sisa));
    // cout << reverseString(ans);
    return reverseString(ans);
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << penjumlahan(a, b) << "\n";
    return 0;
}