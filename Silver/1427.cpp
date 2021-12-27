#include <bits/stdc++.h>
using namespace std;


//1427
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string n;
	cin >> n;
	sort(n.begin(), n.end(), greater<char>());
	for (auto c : n) cout << c;
	
}
