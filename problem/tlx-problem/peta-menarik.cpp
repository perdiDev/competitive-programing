#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    fast_cin();
    int n, m, k, ansB=0, ansK=0, mark=0;
    cin >> n >> m >> k;
    int arr[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> arr[i][j];

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            int temp=1;
            // i -> kolom, j->baris
            if(i<m-1) {
                temp *= arr[j][i+1];
                // cout << arr[j][i+1] << "->";
            }
            if(i>0) {
                temp *= arr[j][i-1];
                // cout << arr[j][i-1] << "->";
            }
            if(j<n-1) {
                temp *= arr[j+1][i];
                // cout << arr[j+1][i] << "->";
            }
            if(j>0) {
                temp *= arr[j-1][i];
                // cout << arr[j-1][i] << "->";
            }
            // cout << temp << ", ";
            if(temp == k) {
                ansB = j+1;
                ansK = i+1;
                mark= 1;
                break;
            }
        }
        if(mark==1) break;
        // cout << "\n";
    }


    cout << ansB << " " << ansK << "\n";
    return 0;
}