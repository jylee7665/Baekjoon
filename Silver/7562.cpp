#include <bits/stdc++.h>
using namespace std;

//7562

#define X first
#define Y second

int dist[305][305];
int dx[8] = { -2,-1,1,2,2,1,-1,-2 };
int dy[8] = { 1,2,2,1,-1,-2,-2,-1 };

int t, n, x, y, xx, yy;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	queue<pair<int, int>> q;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) fill(dist[i], dist[i] + n, -1);
		cin >> x >> y;
		dist[x][y] = 0;
		q.push({ x,y });
		cin >> xx >> yy;
		while (!q.empty()) {
			auto cur = q.front(); q.pop();
			for (int dir = 0; dir < 8; dir++) {
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];
				if (nx < 0 || nx >= n || ny < 0 || ny >= n)continue;
				if (dist[nx][ny] !=-1)continue;
				dist[nx][ny] = dist[cur.X][cur.Y] + 1;
				q.push({ nx,ny });
			}
		}
		cout << dist[xx][yy] << "\n";
	}

}
