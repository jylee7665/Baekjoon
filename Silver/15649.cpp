#include <bits/stdc++.h>
using namespace std;


//15649
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	
	vector<int> v;
	for (int i = 1; i <= n; i++) v.push_back(i);

	do {
		for (int i = 0; i < m; i++) cout << v[i] << " ";
		cout << "\n";
		reverse(v.begin()+m, v.end());
	} while (next_permutation(v.begin(), v.end()));
}
