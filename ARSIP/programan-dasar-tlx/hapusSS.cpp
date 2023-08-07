#include <bits/stdc++.h>
using namespace std;

string str1, str2;

int main() {
    cin >> str1 >> str2;
    int ln = str1.length();

    int n = 0, salah = 0;
    if((ln-1) == str2.length()) {
        for(int i=0;i<ln;i++) {
    //         if(salah > 2) break;
            if(str1[n] != str2[i]) {//cout << "salah" << i << endl;
                salah++;
                n++;
            }
            n++;
        }
    } else {
        salah = 2;
    }

    if(salah >= 2) {
        cout << "Wah, tidak bisa :(" << endl;
    } else {
        cout << "Tentu saja bisa!" << endl;
    }

    return 0;
}