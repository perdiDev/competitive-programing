#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, N, min, max, minTemp, maxTemp;
    int A, B, C;
    cin >> T;

    for(int i=0; i<T; i++)
    {
        min = 0;
        max = 0;
        cin >> N;
        for(int j=0; j<N; j++) 
        {
            minTemp = 1001;
            maxTemp = 0;
            int nilaiX = 0;
            for(int i=0; i<3; i++)
            {
                cin >> nilaiX;
                if(nilaiX >= maxTemp) {
                    maxTemp = nilaiX;
                } 
                if(nilaiX <= minTemp) {
                    minTemp = nilaiX;
                }
            }
            min += minTemp;
            max += maxTemp;
        }
        cout << min << " " << max << endl;
    }

    return 0;
}