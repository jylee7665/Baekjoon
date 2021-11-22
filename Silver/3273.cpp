#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int num[100001];
bool check[2000001];

//3273
int main(void) {
	int n,x;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> num[i];

	cin >> x;

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (x - num[i] > 0 && check[x - num[i]]) cnt++;
		check[num[i]] = true;
	}

	cout << cnt;
}
