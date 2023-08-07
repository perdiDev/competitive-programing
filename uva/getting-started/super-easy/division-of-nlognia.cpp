#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, m, x, y;

    while(1) {
        int temp;
        cin >> k;
        if(k==0) break;
        temp=k;

        cin >> n >> m;
        while(temp--) {
            cin >> x >> y;
            if(x==n || y==m) {
                cout << "divisa\n";
            } else if(x>n) {
                if(y>m)
                    cout << "NE\n";
                else
                    cout << "SE\n";
            } else {
                if(y>m) 
                    cout << "NO\n";
                else 
                    cout << "SO\n";
            }
            printf("k=%d- n=%d, m=%d, x=%d, y=%d", k,n,m,x,y);
        }
    }
}