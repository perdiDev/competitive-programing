#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, sum;

    cin >> a >> b;
    int biggest = a.size(), smallest = b.size();
    if(biggest < smallest) {
        biggest = b.size();
        smallest = a.size();
    }


    int j = smallest-1;
    int temp = 0, tempSum=0;
    for(int i=biggest-1; i>=biggest-smallest-1; i--) {
        if((i == biggest-smallest-1) && (temp == 0)) continue;
        else if(i == biggest-smallest-1) cout << temp;
        int aInt = a[i] - '0';
        int bInt = b[j] - '0';

        tempSum = aInt + bInt + temp;

        if(tempSum>=10) {
            int sementara = tempSum;
            tempSum = tempSum%10;
            temp = sementara/10;
        } else {
            temp = 0;
        }
        
        cout << tempSum << "->" << temp << endl;

        j--;
    }

    // cout << sum;

    return 0;
}