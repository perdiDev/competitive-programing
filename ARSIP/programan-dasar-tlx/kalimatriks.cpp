#include <iostream>
using namespace std;

int main() {
    int n, m, p, nilai;
    cin >> n >> m >> p;
    int matriksA[n][m], matriksB[m][p], matriksC[n][p];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> nilai;
            matriksA[i][j] = nilai;
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            cin >> nilai;
            matriksB[i][j] = nilai;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            matriksC[i][j] = 0;
            for(int k=0; k<m; k++){
                matriksC[i][j] += (matriksA[i][k] * matriksB[k][j]);
            }
            // matriksC[i][j] = nilai;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            cout << matriksC[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}