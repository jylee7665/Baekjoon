#include <bits/stdc++.h>
#include <iostream>
using namespace std;


//2164
int main(void) {
	int n;
	cin >> n;
	queue<int> q;

	for (int i = 1; i <= n; i++) q.push(i);

	while (q.size() !=1) {
		q.pop();
		int cur = q.front();
		q.pop();
		q.push(cur);
	}

	cout << q.front();
}
