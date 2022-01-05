#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m;
string board[1002];
int dist1[1002][1002]; //불
int dist2[1002][1002]; //지훈
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
//4179
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> board[i];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fill(dist1[i], dist1[i] + m, -1);
			fill(dist2[i], dist2[i] + m, -1);
		}
	}

	queue<pair<int, int>> q1;
	queue<pair<int, int>> q2;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 'F') {
				q1.push({ i,j });
				dist1[i][j] = 0;
			}
			if (board[i][j] == 'J') {
				q2.push({ i,j });
				dist2[i][j] = 0;
			}
		}
	}

	while (!q1.empty()) {
		auto cur = q1.front(); q1.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (board[nx][ny] == '#' || dist1[nx][ny] != -1)continue;
			dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
			q1.push({ nx,ny });
		}
	}


	while (!q2.empty()) {
		auto cur = q2.front(); q2.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
				cout << dist2[cur.X][cur.Y]+1;
				return 0;
			}
			if (board[nx][ny] == '#' || dist2[nx][ny] != -1)continue;
			//dist1에는 해당 지점에 불이 언제 붙는지 저장되어 있음
			if (dist1[nx][ny] != -1 && dist1[nx][ny] <= dist2[cur.X][cur.Y] + 1) continue; //불의 전파보다 늦게 이동
			dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;
			q2.push({ nx,ny });
		}
	}
	cout << "IMPOSSIBLE";
}
