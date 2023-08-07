#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    if((n % 4 == 0) && (m % 4 == 0))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}