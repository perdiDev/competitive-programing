#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int kereta[n];

    for (int i = 0; i < n; i++)
    {
        cin >> kereta[i];
    }

    for (int i = n-1; i >= 0; i--)
    {
        if(i>0){
            cout << kereta[i] << ",";
        } else {
            cout << kereta[i];
        }
    }
    
    

    return 0;
}