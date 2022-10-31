#include <bits/stdc++.h>
using namespace std;

int b, k, n;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> b >> k >> n;
    int papan[b][k];
    for(int i=0;i<b;i++){
        for (int j = 0; j < k; j++)
        {
            cin >> papan[i][j];
        }
    }

    while(n--){
        int x1, y1, x2, y2, sum=0;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i=x1-1; i<x2; i++) {
            for(int j=y1-1; j<y2; j++) {
                sum += papan[i][j];
            }            
        }

        cout << sum << "\n";
    }

    return 0;
}