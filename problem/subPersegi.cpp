#include <bits/stdc++.h>
using namespace std;

int n, temp=0;

int main(){
    cin >> n;
    while(n>0){
        temp += n*n;
        n--;
    }
    cout << temp << "\n";

    return 0;
}