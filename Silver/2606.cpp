#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//2606
int n, m;
int board[101][101];
bool vis[101];
int ans = 0;
queue<int> q;
void BFS(int v) {
	vis[v] = 1;
	
	q.push(v);
	while (!q.empty()){
		v = q.front();
		q.pop();
	
		for (int i = 1; i <= n; i++) {
			if (vis[i] == 1 || board[v][i] == 0) continue;
			
			vis[i] = 1;
			q.push(i);
			ans++;
		}
	}
}
int main() {
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		board[a][b] = 1;
		board[a][b] = 1;
	}

	BFS(1);
	cout << ans;
}
