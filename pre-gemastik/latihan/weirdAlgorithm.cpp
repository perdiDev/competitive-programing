#include <iostream>
using namespace std;

int main() {

    long long n;
    cin >> n;

    while(1) {
        cout << n << " ";
        if(n == 1) {
            break;
        }
        if(n%2==0)
            n = n/2;
        else 
            n = n*3+1;
    }

    return 0;
}