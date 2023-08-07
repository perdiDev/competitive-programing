#include <iostream>
using namespace std;

int main() {
    int data[100];
    int nilai, size, i=0;

    while(cin >> nilai) {
        data[i] = nilai;
        i++;
    }

    for(int j = i-1; j >= 0; j--) {
        cout << data[j] << endl;;
    }

    return 0;
}