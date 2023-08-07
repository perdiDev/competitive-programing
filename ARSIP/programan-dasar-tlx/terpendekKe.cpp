#include <bits/stdc++.h>
using namespace std;

int dataBebek[1001];
int n, k;

void sortData() {
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(dataBebek[i] < dataBebek[j]){
                temp = dataBebek[i];
                dataBebek[i] = dataBebek[j];
                dataBebek[j] = temp;
            }
        }
        
    }
    
}

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> dataBebek[i];
    }

    sortData();

    cout << dataBebek[k-1] << "\n";   

    return 0;
}