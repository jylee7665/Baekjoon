#include <bits/stdc++.h>
using namespace std;

int parent[1000002];
int n, m;

int find(int x) {
	if (parent[x] == x) return x;
	return parent[x] = find(parent[x]);
}

void Union(int a, int b) {
	a = find(a);
	b = find(b);
	if (a > b) parent[a] = b;
	else parent[b] = a;
}

//1717
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 0; i <= n; i++) parent[i] = i;
	for (int i = 0; i < m; i++) {
		int num, a, b;
		cin >>num >>a >> b;
		if (num == 0) Union(a, b);
		else if (num == 1) {
			if (find(a) == find(b))
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
}
