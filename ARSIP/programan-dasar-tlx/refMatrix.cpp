#include <bits/stdc++.h>
using namespace std;

int m, n, x, y;
int arr1[75][75], arr2[75][75];

int cekIdentik() {
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr1[i][j] != arr2[i][j]) return 0;
        }
    }
    return 1;
}

int cekHorisontal() {
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr1[i][j] != arr2[m-1-i][j]) return 0;
        }
    }
    return 1;
}

int cekVertikal() {
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr1[i][j] != arr2[i][m-1-i]) return 0;
        }
    }
    return 1;
}

int diagonalKananBawah() {
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr1[i][j] != arr2[j][i]) return 0;
        }
    }
    return 1;
}

int diagonalKiriBawah() {
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr1[i][j] != arr2[m-1-j][m-1-i]) return 0;
        }
    }
    return 1;
}

int main() {
    cin >> m >> n;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr1[i][j];
        }
    }

    cin >> x >> y;

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin >> arr2[i][j];
        }
    }

    if(m != x || n != y){
        if(cekIdentik())
            cout << "identik" << "\n";
            
        else if(cekHorisontal()) 
            cout << "horisontal" << "\n";

        else if(cekVertikal()) 
            cout << "vertikal" << "\n";

        else if(diagonalKananBawah()) 
            cout << "diagonal kanan bawah" << "\n";

        else if(diagonalKiriBawah()) 
            cout << "diagonal kiri bawah" << "\n";

        else
            cout << "tidak identik" << "\n";
    }
        else
            cout << "tidak identik" << "\n";


    return 0;
}