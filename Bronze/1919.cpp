#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//1919
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[2][26]={}, cnt=0;
	string a, b;
	cin >> a >> b;

	for (char c : a) arr[0][c - 'a']++;
	for (char c : b)arr[1][c - 'a']++;

	for (int i = 0; i < 26; i++)
		cnt += abs(arr[0][i] - arr[1][i]);

	cout << cnt;
}
