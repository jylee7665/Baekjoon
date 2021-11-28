#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//5397
int main(void) {
	int l;
	cin >> l;
	while (l--) {
		string st;
		cin >> st;

		list<char> L = {};
		auto cursor = L.begin();
		for (auto c : st) {
			if (c == '<') {
				if (cursor != L.begin()) cursor--;
			}
			else if (c == '>') {
				if (cursor != L.end()) cursor++;
			}
			else if (c == '-') {
				if (cursor != L.begin()) {
					cursor--;
					cursor = L.erase(cursor);
				}
			}
			else
				L.insert(cursor, c);
		}
		for (auto c : L) cout << c;
		cout << '\n';

	}
		
}
