#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--){
        int number, temp=0, revNumber=0;
        cin >> number;
        while(number > 0){
            temp = (number%10);
            revNumber = (revNumber*10) + temp;

            // cout << temp << "-";
            number /= 10;
            // cout << number << "->";
        }
        cout << revNumber << "\n";
    }

    return 0;
}