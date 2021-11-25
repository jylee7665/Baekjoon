#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//1406
int main(void) {
	string st;
	cin >> st;
	list<char> L;
	for (auto c : st) L.push_back(c);
	auto cursor = L.end();
	int n;
	cin >> n;
	while (n--) {
		char c;
		cin >> c;

		if (c == 'L') {
			if (cursor != L.begin()) cursor--;
		}
		else if (c == 'D') {
			if (cursor != L.end())cursor++;
		}
		else if (c == 'B') {
			if (cursor != L.begin()) {
				cursor--;
				cursor = L.erase(cursor);
			}
		}
		else {
			char add;
			cin >> add;
			L.insert(cursor, add);
		}
	}
	for (auto c : L) cout << c;
}
