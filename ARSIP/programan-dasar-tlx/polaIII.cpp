#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int o = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            if(o==10) {
                o = 0;
            }
            cout << o;
            o++;
        }
        cout << endl;
    }

    return 0;
}