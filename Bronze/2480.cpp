#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//2480
int main(void) {
	int a, b, c;
	cin >> a >> b >> c;

	//1번 경우
	if (a == b && b== c) {
		cout << 10000 + a * 1000;
	}


	//2번 경우
	else if (a == b || b == c || a == c) {
		if (a == b || a==c)
			cout << 1000 + a * 100;
		else if(b==c)
			cout << 1000 + b * 100;
	}

	//3번 경우
	else if (a != b && b != c && a != c) {
		cout << max({ a, b, c }) * 100;
	}
}
