#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int n;

int main() {
    cin >> n;
    int nilai;
    float sum = 0;
    int temp = n;

    while(n--){
        cin >> nilai;
        sum += nilai;
    }

    printf("%.1f\n", sum/temp);

    return 0;
}