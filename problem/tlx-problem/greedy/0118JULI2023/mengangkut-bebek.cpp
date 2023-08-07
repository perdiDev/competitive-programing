#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int k, n,
        p, c, b;
    cin >> k;
    vector<int> pL(k), cL(k);
    vector<long long> bb;
    vector<pair<int,int>> kb;

    for(int i=0; i<k; i++) {
        cin >> pL[i];
    }

    for(int i=0; i<k; i++) {
        cin >> cL[i];
    }

    for(int i=0; i<k; i++) {
        kb.push_back(make_pair(cL[i], pL[i]));
    }

    cin >> n;
    bb.resize(n);

    for(int i=0; i<n; i++) {
        cin >> bb[i];
    }

    sort(kb.begin(), kb.end());
    sort(bb.begin(), bb.end(), greater<long long>());

    int idxKandang = 0;
    long long ans=0;
    
    for(int i=0; i<n; i++) {
        ans += (bb[i]*kb[idxKandang].first*1LL);
        kb[idxKandang].second--;
        if(kb[idxKandang].second==0)
            idxKandang++;
    }

    cout << ans << "\n";

    return 0;
}
