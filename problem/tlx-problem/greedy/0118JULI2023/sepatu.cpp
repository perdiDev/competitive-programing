#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> kb(n), sb(m);

    for(int i=0; i<n; i++)
        cin >> kb[i];

    for(int i=0; i<m; i++)
        cin >> sb[i];

    sort(kb.begin(), kb.end());
    sort(sb.begin(), sb.end());

    int count=0, k=0, j=0;
    while(k<n && j<m) {
        // cout << kb[k] << " " << sb[j] << " +\n";
        if(kb[k] == sb[j] || (kb[k]+1)==sb[j]) {
            count++;
            k++; j++;
        }
        else if(kb[k]<(sb[j]+1)) 
            k++;
        else
            j++;
    }
    cout << count << endl;
    return 0;
}