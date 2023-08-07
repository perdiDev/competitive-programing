#include <bits/stdc++.h>
using namespace std;

#define cpyook ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"

int main() {
    cpyook
    double med;

    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    if(n&1) {
        med = (double) arr[(n/2)];
    } else {
        med = (double) (arr[n/2]+arr[n/2-1])/2;
    }
    printf("%.1lf\n", med);
    
    return 0;
}