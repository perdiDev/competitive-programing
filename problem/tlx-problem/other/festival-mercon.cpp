#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];

    for(int i=0;i<n;i++) 
        cin >> a[i];

    for(int i=0;i<n;i++) 
        cin >> b[i];

    int gan=0;
    for(int i=0;i<n;i++) 
        // cout << a[i] << "\n";
        if(a[i]%2 == 1) gan++;

    if(gan%2==1) cout << 1 << "\n";
    else cout << 0 << "\n";

    return 0;
}