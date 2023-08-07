#include <cstdio>
// #include <iostream>
#define LOG2(n) ((n) == 0 ? 0 : 63 - __builtin_clzll(n))
using namespace std;

// #define dbg(x) cout << #x << " = " << x << "\n"
int n;
long long a[100005],
          sumor, sumxor, ans;

int main() {
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        scanf("%lld", &a[i]);
        sumxor ^= a[i];
        sumor |= a[i];
    }

    if(sumor^sumxor) {
        printf("%lld", sumxor | ( ( 1LL << ( LOG2(sumor ^ sumxor) + 1 ) ) - 1 ));
    } else {
        printf("%lld", sumxor);
    }
}