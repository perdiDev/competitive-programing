#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum;
    bool cek = true;

    for(int i=0; i<3; i++){
        cin >> n;
        if(n < 50)
            cek = false;
        sum += n;
    }

    if(cek && sum >= 200)
        cout << "Lolos" << "\n";
    else 
        cout << "Tidak Lolos" << "\n";

    return 0;
}