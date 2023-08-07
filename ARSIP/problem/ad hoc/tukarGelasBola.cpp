#include <bits/stdc++.h>
using namespace std;

int n, m, q;
int gelas[100001];

int findIndex(int isi, int idx){
    if(isi == gelas[idx-1]){
        return idx;
    }
    return findIndex(gelas[idx-1], isi);
}

int main() {
    cin >> n >> m;

    for(int i=0; i<n; i++){
        gelas[i] = i+1;
    }


    for(int i=0; i<m; i++){
        int x1, x2;
        for(int i=0; i<n; i++){
            cout << gelas[i] << " ";
        }
        cout << endl;
        cin >> x1 >> x2;
        int idx1 = findIndex(gelas[x1-1], x1);
        gelas[idx1-1] = x2;
        int idx2 = findIndex(gelas[x2-1], x2);
        gelas[idx2-1] = x1;
        cout << idx1 << " : " << idx2 << endl;
    }

    // Melakukan simulasi
    // cin >> q;
    // int cari;
    // for (int i = 0; i < q; i++)
    // {
    //     cin >> cari;
    //     int ans = findIndex(cari);
    //     cout << ans + 1 << "\n";
    // }
    

    return 0;
}