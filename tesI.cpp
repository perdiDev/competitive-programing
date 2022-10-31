#include <bits/stdc++.h>
using namespace std;

int main() {
    int xTarget, yTarget, n, xTitik[100000], yTitik[100000], q;
    float jangkauan[100000], r;

    cin >> xTarget >> yTarget;
    cin >> n;

    // /x1
    for(int i=0;i<n;i++){
        cin >> xTitik[i] >> yTitik[i];
        int x = abs(xTitik[i]-xTarget);
        int y = abs(yTitik[i]-yTarget);
        float sum = sqrt(x*x + y*y);
        jangkauan[i] = sum;
        // cout << sum << " ";
    }

    cin >> q;
    while(q--){
        cin >> r;
        int tambahkan=0;
        for (int i = 0; i < n; i++)
        {
            if(jangkauan[i]<=r)
                tambahkan++;
                // cout << jangkauan[i];
        }
        cout << tambahkan << "\n";
    }

    return 0;
}