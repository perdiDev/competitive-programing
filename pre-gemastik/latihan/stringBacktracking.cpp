#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

char A[] = "Perdi";

void binary(int n) {
    if(n<1) printf("%s", A);
    else {
        A[n-1] = 0;
        binary(n-1);
        A[n-1] = 1;
        binary(n-1);
    }
}

int main() {
    printf("%s\n", A);
    A[5-1] = 0;
    printf("%s\n", A);
    binary(5);

    return 0;
}