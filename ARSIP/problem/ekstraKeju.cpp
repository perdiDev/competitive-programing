#include <bits/stdc++.h>
using namespace std;

int ekstraKeju(int num){
    // cout << num << ":";
    long long jumlah=0, kali=1, satuan;
    while(num){
        satuan = num%10;
        jumlah += satuan;
        kali *= satuan;
        num /=10;
    }
    // cout << jumlah << "+" << kali  << endl;

    return jumlah + kali;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long n, m=0;
    cin >> n;

    if(n>100)
        n = 100;

    for(long long i=1; i <= n; i++){
        if(ekstraKeju(i) == i)
            m++;
    }

    cout << m << "\n";
    // cout << ekstraKeju(19) << "\n";

    return 0;
}