#include <bits/stdc++.h>
using namespace std;
int euclid(int a, int b){
    if(b==0) return a;
    else return euclid(b, a%b);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, nilai;
    cin >> n;

    int kpk = 1;
    for(int i=0; i<n; i++){
        cin >> nilai;
        kpk = (kpk*nilai)/euclid(kpk, nilai);
    }
    cout << kpk;
    return 0;
}