#include <stdio.h>
#define min(a,b) (((a) < (b)) ? (a) : (b))

int main() {
    int n; scanf("%d", &n);
    char a[51], b[51]; scanf("%s %s", a, b);

    int arA[3] = {0, 0, 0}, arB[3] = {0, 0, 0};

    for(int i=0; i<n; i++) {
        if(a[i]=='B') arA[0]++;
        else if(a[i]=='G') arA[1]++;
        else arA[2]++;

        if(b[i]=='B') arB[2]++;
        else if(b[i]=='G') arB[0]++;
        else arB[1]++;
    }

    n = min(arA[0], arB[0]) + min(arA[1], arB[1]) + min(arA[2], arB[2]);
    printf("%d\n", n);

    return 0;
}