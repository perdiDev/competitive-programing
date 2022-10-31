#include <bits/stdc++.h>
using namespace std;

int n, a;
char c;

int main() {
    cin >> n >> c >> a;

    int hasilI;
    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            hasilI = n-1-i;
            if(i==j || hasilI == j){
                cout << a;
            }
            else {
                cout << c;
            }
        }
        cout << "\n";        
    }

    return 0;
}