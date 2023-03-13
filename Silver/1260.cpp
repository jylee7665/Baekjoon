#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

#define MAX_N 1001
int Graph[MAX_N][MAX_N];
int vis[MAX_N];
int N, M, V;

//1260번 DFS와 BFS
void dfs(int node) {
	vis[node] = true;
	cout << node << ' ';

	for (int nxt = 0; nxt <= N; nxt++) {
		if (!vis[nxt] && Graph[node][nxt])
			dfs(nxt);
	}
}

void bfs(int node) {
	queue<int> q;
	vis[node] = true;
	q.push(node);

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		cout << cur << ' ';
		for (int nxt = 0; nxt <= N; nxt++) {
			if (!vis[nxt] && Graph[cur][nxt]) {
				vis[nxt] = true;
				q.push(nxt);
			}
		}
	}
}
int main() {
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		Graph[x][y] = Graph[y][x] = 1;
	}
	dfs(V);
	cout << '\n';
	memset(vis, 0, sizeof(vis));
	bfs(V);
	return 0;
}
