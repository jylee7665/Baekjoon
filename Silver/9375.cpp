#include <bits/stdc++.h>
using namespace std;

//9375
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t,n;
	cin >>t;
	
	while (t--) {
		vector<int> v;
		map<string, int> m;
		cin >> n;
		while (n--) {
			string clothes, kind;
			cin >> clothes >> kind;
			m[kind]++;
		}
		int ans = 1;
		map<string, int>::iterator iter;
		for (iter = m.begin(); iter != m.end(); iter++)
			ans *= (iter->second + 1);

		cout << ans - 1 << "\n";
	}

	
}
