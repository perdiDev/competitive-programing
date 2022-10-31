#include <bits/stdc++.h>
using namespace std;

int n, q, x;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n >> q;
    int data[n];
    for(int i=1;i<=n;i++){
        if(i%2==0){
            data[i-1] = n + 1 - (i/2);
        } else {
            data[i-1] = (i+1)/2;
        }
    }

    for(int i=0; i<q; i++){
        cin >> x;
        int count = 0;
        for(int j=0; j<n; j++){
            int sum = 0;
            for(int k=j; k<n; k++){
                if(j==n-1 && k==n-1) continue;
                // cout << k << " ";
                sum += data[k];
                if(sum == x && j!=k) {
                    count++;
                }
                // cout << sum << endl;
            }
            // cout << endl;
        }
        cout << count << "\n";
    }

    return 0;
}