#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//11328
int main(void) {
	int n;
	cin >> n;

	string a, b;
	//strfry함수
	//2번째 문자열이 1번째 문자열에서 얻어질 수 있는가?
	for (int i = 0; i < n; i++) {
        int alpha[26]={};
		cin >> a >> b;
		for (char c : a) alpha[c - 'a']++;
		for (char c : b)alpha[c - 'a']--;

		bool isPossible = true;
		for (int n : alpha) if (n != 0) isPossible = false;

		if (isPossible) cout << "Possible\n";
		else cout << "Impossible\n";
	}

}
