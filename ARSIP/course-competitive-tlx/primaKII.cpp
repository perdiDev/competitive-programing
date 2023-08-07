#include <bits/stdc++.h>
using namespace std;

int N, Q=990000;
bool prima[990000];
int nPrima[77777];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    memset(prima, true, 990000);
    cin >> N;

    prima[0]=false;
    prima[1]=false;

    for(int i=2; i*i<=Q;i++){
        if(prima[i]) {
            for(int j=i*i;j<Q;j+=i){
                prima[j]= false;
            }
        }
    }

    int in=0;
    for(int i=2;i<Q;i++){
        if(prima[i] == 1){
            nPrima[in] = i;
            in++;
        }
    }

    int k, nilaiPrima;
    for(int i=0; i<N; i++) {
        cin >> k;
        
        cout << nPrima[k-1] << "\n";
    }

    return 0;
}