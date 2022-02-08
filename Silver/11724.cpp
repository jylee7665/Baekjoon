#include <bits/stdc++.h>
using namespace std;

int n, m;

int board[1005][1005];
int vis[1005];

void dfs(int x) {
	
	vis[x] = 1;
	for (int i=0; i <= n; i++) {
		if (board[x][i] && !vis[i]) dfs(i);
	}
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		board[a][b] = board[b][a] = 1;
	}

	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			dfs(i);
			cnt++;
		}
	}

	cout << cnt;
}
