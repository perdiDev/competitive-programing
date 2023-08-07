#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int h, w, nilai;
    cin>> h >> w;
    bitset<w> weight[h];
    int data[h];

    for(int i=0; i<h;i++){
        cin >> nilai;
        data[i] = weight.set(nilai);
    }
    // for(int i=0; i<h;i++){
    //     cout << data[i];
    // }

    return 0;
}