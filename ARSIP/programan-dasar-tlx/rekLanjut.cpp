#include <iostream>
using namespace std;
int N;
int catat[1001];
bool pernah[1001] = {0};

void rek(int k) {
    if(k >= N) {
        bool zigzag = true;
        for(int i=1;i<N-1; i++){
            if(!((catat[i-1] < catat[i] && catat[i+1] < catat[i]) 
            || (catat[i-1] > catat[i] && catat[i+1] > catat[i])))
                zigzag = false;
        }
        if(zigzag) {
            for(int i=0;i<N;i++) cout << catat[i];
            cout << "\n";
        }
    } else {
        for(int i=1;i<=N;i++) {
            if(!pernah[i]) {
                pernah[i] = true;
                catat[k] = i;
                rek(k+1);
                pernah[i] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    cin >> N;

    rek(0);
    return 0;
}