#include <bits/stdc++.h>
using namespace std;
int m, n, tarM, tarN, tar, t=0;
int arr[25][25];
int visited[25][25];

void mainJailbreak(int bar, int kol) {
    if(bar>=0 && bar<m && kol>=0 && kol<n) {
        if(!visited[bar][kol] && arr[bar][kol] == tar) {
            visited[bar][kol] = 1;
            t++;
            mainJailbreak(bar, --kol); kol++;
            mainJailbreak(bar, ++kol); kol--;
            mainJailbreak(--bar, kol); bar++;
            mainJailbreak(++bar, kol); bar--;
        }
    }
}

int main() {
    cin >> m >> n;

    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++) 
            cin >> arr[i][j];

    cin >> tarM >> tarN;
    tar = arr[tarM][tarN];

    mainJailbreak(tarM, tarN);

    cout << (t*(t-1)) << "\n";

    return 0;
}