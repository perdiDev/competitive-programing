#include <bits/stdc++.h>
using namespace std;

struct Kontak {
    string nama;
    string num;
};

int main() {
    int n, q;
    cin >> n >> q;
    struct Kontak wartel[n];

    for(int i=0; i<n; i++)
        cin >> wartel[i].nama >> wartel[i].num;


    while(q--) {
        string s;
        int a=0, b=n-1, ans=-1;
        cin >> s;

        while(a<=b) {
            int mid = (a+b)/2;

            if(wartel[mid].nama == s) {
                ans = mid;
                break;
            }
            else if(wartel[mid].nama < s) {
                a=mid+1;
            } else {
                b=mid-1;
            }
        }

        if(ans==-1) cout << "NIHIL" << endl;
        else cout << wartel[ans].num << endl;
    }

    return 0;
}