#include <bits/stdc++.h>
using namespace std;

//4949
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	while (1) {
		string str;
		getline(cin, str);

		stack<char> s;

		if (str == ".") break;


		bool flag = true;
		for (int i = 0; i < str.size(); i++) {
			if(str[i]=='[' || str[i] == '(') s.push(str[i]);
			else if (str[i] == ')') {
				if(!s.empty() && s.top() == '(') s.pop();
				else {
					flag = false;
					break;
				}
			}
			else if (str[i] == ']') {
				if (!s.empty() && s.top() == '[') s.pop();
				else {
					flag = false;
					break;
				}
			}
		}

		if (s.empty() && flag) cout << "yes\n";
		else cout << "no\n";
	}
}
