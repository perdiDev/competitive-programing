#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() {
    char a;

    int count = 1;
    while(scanf("%c", &a) == 1) {
        if(a == '"') {
            if(count == 1) {
                cout << "``";
                count++;
            } else {
                cout << "''";
                count--;
            }
        } else {
            cout << a;
        }
    }

    return 0;
}
