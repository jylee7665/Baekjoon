#include <bits/stdc++.h>
using namespace std;


int board[105][105];
int dist[105];
int n, m;
queue<int>q;

void BFS(int x) {
	q.push(x);
	dist[x]++;
	while (!q.empty()) {
		int cur = q.front(); q.pop();
		for (int i = 1; i <= n; i++) {
			if (dist[i] >= 0 || board[cur][i] !=1) continue;
			q.push(i);
			dist[i] = dist[cur] + 1;
		}
	}
}
//1389
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;
		board[a][b] = board[b][a] = 1;
	}

	int min = 5000,ans;
	for (int i = 1; i <= n; i++) {
		for (int i = 1; i <= n; i++) dist[i] = -1;
		BFS(i);
		int sum = 0;
		for (int i = 1; i <= n; i++) sum += dist[i];
		if (sum < min) {
			min = sum;
			ans = i;
		}
	}
	cout << ans;
}
