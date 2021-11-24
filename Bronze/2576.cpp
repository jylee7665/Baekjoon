#include <bits/stdc++.h>
#include <iostream>
using namespace std;


//2576
int main(void) {
	int sum=0,n,min=100;
	for (int i = 0; i < 7; i++) {
		cin >> n;
		if (n % 2 == 1) {
			sum += n;
			if(n < min)min = n;
		}
	}

	if (min == 100) cout << -1;
	else cout << sum << '\n' << min;

}
