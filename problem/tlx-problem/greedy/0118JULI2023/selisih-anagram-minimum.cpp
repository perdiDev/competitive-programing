#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;

ll findMin(string x) {
    ll minAns=LONG_MAX;
    string temp=x;

    sort(temp.begin(), temp.end());
    do {
        ll a = stoll(x);
        ll b = stoll(temp);

        ll dif = abs(a-b);
        if(a!=b) minAns = min(minAns, dif);
    } while(next_permutation(temp.begin(), temp.end()));

    return minAns;
}

int main() {
    cin >> s;

    ll n=s.size(), idx = n-1;
    while(idx>0 && s[idx]==s[idx-1]) idx--;
    string x = s.substr(max(0ll, idx-2), min(idx+1, 3ll));

    ll ans = findMin(x);
    cout << ans;
    for(int i=0; i<n-idx-1; i++)
        cout << 0;

    return 0;
}