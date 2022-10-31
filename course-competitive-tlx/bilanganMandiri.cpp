#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long a, b;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        bool sudah[b];
        memset(sudah, true, b)
        long long banyak = 0;
        for(long long i=2; i<=b; i++){
            bool cek = true;
            for(long long j=2;j<=a; j++){
                if((i%j)==0)
                    cek = false;
            }
            if(cek){
                // cout << i << "->";
                banyak++;
            }
        }
        cout << banyak;
    }
    

    return 0;
}