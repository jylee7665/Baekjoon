#include <bits/stdc++.h>
using namespace std;

//10808
int main(void) {
	string s;
	cin >> s;
	for (char a = 'a'; a <= 'z'; a++) {
		int cnt = 0;
		for (auto c : s)
			if (a == c) cnt++;
		cout << cnt << ' ';
	}
}
