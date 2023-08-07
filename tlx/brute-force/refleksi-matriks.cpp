#include <bits/stdc++.h>
using namespace std;

#define cpyook ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"

int main() {
    cpyook
    int n, temp;
    cin >> n >> temp;
    int m[n][n], r[n][n];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> m[i][j];

    cin >> n >> temp;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> r[i][j];
    
    // Cek identik
    int id1=1;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(m[i][j] != r[i][j])
                id1 = 0;
    

    int id2=1;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(m[i][j] != r[i][n-j-1])
                id2 = 0;

    
    int id3=1;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(m[i][j] != r[n-i-1][j])
                id3 = 0;


    int id4=1;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(m[i][j] != r[j][i])
                id4 = 0;
    

    int id5=1;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(m[i][j] != r[n-j-1][n-i-1])
                id5 = 0;
    

    if(id1==1) cout << "identik" << endl;
    else if(id2==1) cout << "vertikal" << endl;
    else if(id3==1) cout << "horisontal" << endl;
    else if(id4==1) cout << "diagonal kanan bawah" << endl;
    else if(id5==1) cout << "diagonal kiri bawah" << endl;
    else
        cout << "tidak identik" << endl;

    
    return 0;
}