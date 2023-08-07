#include <bits/stdc++.h>
using namespace std;

int dp(int n) {
    if(n==0) 
        return n;
    else 
        return max(n, dp(n/2) + dp(n/3) + dp(n/4));
}

int main() {
    int n;
    cin >> n;

    cout << dp(n) << "\n";
    return 0;
}