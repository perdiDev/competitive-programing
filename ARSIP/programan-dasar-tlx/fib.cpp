#include <iostream>
using namespace std;

int fib(int N) {
    if(N==1) {
        return 1;
    } 
    else if(N==0) {
        return 0;
    }
    else {
        return fib(N-1) + fib(N-2);
    }

    return 0;
}

int main() {
    int N;
    cin >> N;

    cout << fib(N);
    return 0;
}