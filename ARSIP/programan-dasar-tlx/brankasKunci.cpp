#include <iostream>
using namespace std;
int N, K;
int catat[1001];
bool pernah[1001];

void fungsi(int kedalaman) {
    if(kedalaman >= K) {
        bool menaik = true;
        for(int i=0; i<K-1; i++){
            if(catat[i] > catat[i+1]) menaik = false;
        }
        if(menaik) {
            for(int i=0;i<K;i++) {
                cout << catat[i];
                if(i < K-1) cout << " ";
            }
            cout << "\n";
        }
    } else {
        for(int i=1; i<=N; i++){
            if(!pernah[i]) {
                pernah[i] = true;
                catat[kedalaman] = i;
                fungsi(kedalaman+1);
                pernah[i] = false;
            }
        }
    }
}

int main() {
    cin >> N >> K;
    
    fungsi(0);

    return 0;
}