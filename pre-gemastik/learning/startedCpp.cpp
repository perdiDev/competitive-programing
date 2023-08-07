#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v;
typedef pair<int, int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i, a, b) for(int i=a; i<b; i++)

int main() {
    // Make input and output more efficiency
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    // Using \n more faster than endl always make a flush operation
    cout << a << b << "\n";

    // To get string with space
    // string s;
    // getline(cin, s);

    // Long integer and dobule
    long long x = 1LL;
    double a = 1.0;
    double b = 1.0;

    if(abs(a-b) < 1e-9) {
        printf("Thats same");
    }

    int n =3;
    REP(i, 1, n) {
        printf("%d ", i);
    }

    // Shorting code
    ll y = 2LL;
    v a = {1, 2};
    




    return 0;
}