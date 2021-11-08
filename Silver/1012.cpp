#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int board[52][52];
int vis[52][52];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int n, m,k; // 가로길이, 세로길이, 배추 위치의 개수


int main(void) {
	queue<pair<int, int>> q;
	int t; //테스트 케이스의 개수
	cin >> t;
	while (t--) {
		cin >> n >> m >> k;
		memset(vis, 0, sizeof(vis));
		memset(board, 0, sizeof(board));
		for (int i = 0; i < k; i++) {
			int a, b;
			cin >> a >> b;
			board[a][b] = 1;
		}

		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (board[i][j] == 0 || vis[i][j] != 0) continue;
				q.push({ i, j });
				vis[i][j] = 1;
				ans++;

				while (!q.empty()) {
					int x = q.front().first;
					int y = q.front().second;
					q.pop();

					for (int dir = 0; dir < 4; dir++) {
						int nx = x + dx[dir];
						int ny = y + dy[dir];
						if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
						if (board[nx][ny] != 1 || vis[nx][ny] != 0) continue;
						vis[nx][ny] = 1;
						q.push({ nx,ny });
					}
				}

			}
		}
		cout << ans << '\n';


	}


}
