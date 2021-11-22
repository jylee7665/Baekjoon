#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//2490
int main(void) {
	
	int num;
	string res = "DCBAE";

	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			cin >> num;
			sum += num;
		}
		cout << res[sum] << '\n';
	}

}
