#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for(int i=1; i<a+1; i++){
        for(int j=1; j<b+1; j++){
            if(i%2==0 && j%2==0)
                cout << "#";
            else if(i%2 == 1 && j%2==1)
                cout << "*";
            else //if(a%2 == 0 || b%2==0)
                cout << "$";
        }
        cout << "\n";
    }

    return 0;
}