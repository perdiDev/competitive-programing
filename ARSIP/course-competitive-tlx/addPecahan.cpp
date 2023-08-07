#include <bits/stdc++.h>
using namespace std;

int A, B, C, D;
unsigned long long E, F, gcd;

unsigned long long euclid(int a,int b){
    if(a%b==0) return b;
    else return euclid(b, a%b);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> A >> B >> C >> D;
    E = A*D + B*C;
    F = B*D;
    if(E > F) gcd = euclid(E, F);
    else gcd = euclid(F, E);

    cout << (E/gcd) << " " << (F/gcd) << endl;

    return 0;
}