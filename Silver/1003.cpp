#include <bits/stdc++.h>
using namespace std;

//1003

int F[45];

int fibo(int n) {
	if (n == 0) { F[0] = 0;  return 0; }
	else if (n == 1) { F[1] = 1; return 1; }

	if (F[n] != 0) return F[n];
	else return F[n]=fibo(n - 1) + fibo(n - 2);
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n,num;
	cin >> n;

	while (n--) {
		cin >> num;
		if (num == 0) cout << "1 0\n";
		else if (num == 1) cout << "0 1\n";
		else {
			fibo(num);
			cout << F[num - 1] << " " << F[num] << "\n";
		}
	}
}
