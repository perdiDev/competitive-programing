#include <bits/stdc++.h>
using namespace std;

int n, langkah;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n;
    while(n--) {
        cin >> langkah;
        int belokanKe = 1;
        int temp = 1;
        int x = 0, y = 0;

        while(langkah>0) {
            if(belokanKe > langkah) {
                temp = langkah;
            } else {
                temp = belokanKe;
            }
            if(belokanKe%4 == 0) {
                y -= temp;
            }
            else if(belokanKe%4 == 1) {
                x += temp;
            } 
            else if(belokanKe%4 == 2) {
                y += temp;
            }
            else if(belokanKe%4 == 3) {
                x -= temp;
            }

            langkah -= belokanKe;
            belokanKe++;
        }
        cout << x << " " << y << "\n";
    }

    return 0;
}