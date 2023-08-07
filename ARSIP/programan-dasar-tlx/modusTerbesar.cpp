#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin >> n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	int modus = 0, maxModus = 0;
	for(int i=1; i<=1000; i++){
		int tempModus = 0;
		for(int j=0; j<n; j++){
			if(i == arr[j]) {
				tempModus++;
			}
		}
		if(tempModus >= modus && i > maxModus){
			modus = tempModus;
			maxModus = i;
		}
	}

	cout << maxModus << endl;

	return 0;
}