#include <bits/stdc++.h>
using namespace std;

//1920
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	int m,num;
	cin >> m;
	while (m--) {
		cin >> num;
		cout << binary_search(a.begin(), a.end(), num) << "\n";
	}
}
