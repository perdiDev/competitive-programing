#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
ll n;

ll binSearc(ll t, ll arr[]) {
    ll a=0, b=n-1, tengah, ans=-1;

    while(a<=b) {
        tengah = (a+b)/2;

        if(t >= arr[tengah]) {
            a = tengah+1;
            ans=tengah;
        } else {
            b = tengah-1;
        }
    }
    return ans;
}

int main() {
    cin >> n;
    ll arr[n];

    for(ll i=0; i<n; i++) 
        cin >> arr[i];
    
    ll q;
    cin >> q;

    while(q--) {
        // ll x, y, ansX=-1, ansY=-1;
        // cin >> x >> y;

        // ll a=0, b=n-1;
        // while(a<=b) {
        //     ll mid = (a+b)/2;
        //     // cout << a << " " << b << " " << mid << " " << bb[mid] << " " << x  << "+" << endl;

        //     if(bb[mid]>x) {
        //         b=mid-1;
        //         ansX=mid-1;
        //     } else {
        //         a=mid+1;
        //     }
        // }

        // a=0, b=n-1;
        // while(a<=b) {
        //     ll mid = (a+b)/2;
        //     // cout << a << " " << b << " " << mid << " " << bb[mid] << " " << y << "-" << endl;
            
        //     if(bb[mid]<=y) {
        //         a=mid+1;
        //         ansY = mid;
        //     } else {
        //         b=mid-1;
        //     }
        // }

        // cout << (ansY-ansX) << endl; 

        ll x, y;
        cin >> x >> y;

        cout << binSearc(y, arr) - binSearc(x, arr) << endl;

    }

    return 0;
}