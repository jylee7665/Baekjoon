#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//1267
int main(void){
	int n,c;
	cin >> n;

	int Y = 0, M = 0;
	for (int i = 0; i < n; i++) {
		cin >> c;

		Y += (c / 30 +1) * 10;
		M += (c / 60 +1) * 15;

	}

	if (Y < M)
		cout << "Y " << Y;
	else if(Y==M)
		cout << "Y M " << Y;
	else
		cout << "M " << M;
}
