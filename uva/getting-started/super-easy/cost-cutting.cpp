#include <bits/stdc++.h>
using namespace std;

#define MAX 10001
#define MIN 999
typedef long long ll;

int main() {
    int t;
    ll a[3];

    cin >> t;
    for(int i=1; i<=t; i++) {
        for(int j=0;j<3; j++) 
            cin >> a[j];

        ll max = MIN;
        ll min = MAX;
        for(int k=0; k<3; k++) {
            if(max < a[k]) max = a[k];
            if(min > a[k]) min = a[k];
        }

        ll count = 0;
        for(int l=0; l<3; l++) {
            if(a[l] > min && a[l] < max) {
                printf("Case %d: %d\n", i, a[l]);
                count++;
            }
        }
        
        if(count==0) printf("Case %d: %d\n", i, a[0]);
    }

    return 0;
}