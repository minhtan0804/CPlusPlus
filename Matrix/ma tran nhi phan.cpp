#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n][3];
	int dem = 0;
	for (int i = 0; i < n; i++){
		int k = 0;
		for (int j = 0; j < 3; j++){
			cin >> a[i][j];
			if (a[i][j] == 1){
				k++;
			}
		}
		if (k >= 2){
			dem++;
		}
	}
	cout << dem << endl;
	return 0;
}
