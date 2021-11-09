#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(void) {
	int n,v;
	int arr[102];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cin >> v;
	int cnt=0;
	for (int i = 0; i < n; i++)
		if (arr[i] == v) cnt++;
	cout << cnt;
}
