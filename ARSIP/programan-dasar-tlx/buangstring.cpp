#include <iostream>
#include <string>
using namespace std;

int main() {
    string satu = "nasi";
    string dua;

    cin >> satu >> dua;

    // int length = dua.length();
    while(satu.find(dua)!=string::npos) {
        satu = satu.erase(satu.find(dua), dua.length());
    }

    cout << satu;

    return 0;
}