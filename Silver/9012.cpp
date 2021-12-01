#include <bits/stdc++.h>
using namespace std;

//9012

int main(void) {
	int n;
	cin >> n;
	while (n--) {
		string st;
		cin >> st;
		stack<char> stack;
		for (int i = 0; i < st.length(); i++) {
			if (st[i] == '(' || stack.empty())
				stack.push(st[i]);
			else if (stack.top() == '(') stack.pop();
		}
		if (stack.size() == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
