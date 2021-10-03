#include<bits/stdc++.h>
using namespace std;

int snt(int n){
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a;
		cin >> a;
		for (int i = 2; i <= a; i++){
			if (snt(i)){
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}



