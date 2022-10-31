#include <bits/stdc++.h>
using namespace std;

int p, l;
int papan[70][50];
bool keluar = false;
bool bertemu = false;


void mulaiCek(int x, int y) {
    if(papan[y][x] != 0) {

        papan[y][x] == 0;
        cout << x << " " << y << ":" << papan[x][y] << endl;

        // Cek pintu
        if((x == 0 || y == 0 || y == p-1 || x == l-1) && papan[y][x] == ' ')
            keluar = true;

        // Cek bertemu
        if(papan[x][y] == 'D')
            bertemu = true;

        // Geser kanan
        if(papan[y][x+1] == ' ' && papan[y][x+1] != 0)
            mulaiCek(x+1, y);
        // Geser kiri
        if(papan[y][x-1] == ' ' && papan[y][x-1] != 0)
            mulaiCek(x-1, y);

        // Geser atas
        if(papan[y+1][x] == ' ' && papan[y+1][x] != 0)
            mulaiCek(x, y+1);
        // Geser kanan
        if(papan[y-1][x] == ' ' && papan[y-1][x] != 0)
            mulaiCek(x, y-1);
    }   

}

int main() {
    int startX, startY;
    cin >> p >> l;
    for(int i=0;i<p;i++){
        string line;
        getline(cin, line);
        // for(int j=0; j<l; j++){
        //     papan[i][j] = s[j];
        //     if(papan[i][j] == 'C'){
        //         startX = j;
        //         startY = i;
        //     }
        // }
        cout << line << " ";
    }

    // mulaiCek(startX, startY);

    if(bertemu)
        cout << "Dawala bertemu Cepot" << "\n";
    else 
        cout << "Dawala tidak bertemu Cepot" << "\n";

    if(keluar)
        cout << "ada jalan Cepot lumpat" << "\n";
    else 
        cout << "tidak ada jalan Cepot lumpat" << "\n";


    // for (int i = 0; i < p; i++)
    // {
    //     for (int j = 0; j < l; j++)
    //     {
    //         cout << papan[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    

    return 0;
}