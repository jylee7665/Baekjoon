#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define X first
#define Y second

int board[505][505];
bool check[505][505];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
//1926
int main(void) {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> board[i][j];

	

	int cnt = 0, mx = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] != 1 || check[i][j] == 1) continue;
			cnt++;
			queue<pair<int, int>> q;
			check[i][j] = 1;
			q.push({ i,j });

			int area = 0;
			while (!q.empty()) {
				area++;
				auto cur = q.front(); q.pop();
				for (int dir = 0; dir < 4; dir++) {
					int x = cur.X + dir[dx];
					int y = cur.Y + dir[dy];
					if (x < 0 || x >= n || y < 0 || y >= m) continue;
					if (board[x][y] != 1 || check[x][y] == 1) continue;
					check[x][y] = 1;
					q.push({ x,y });
				}
			}
			mx = max(mx, area);
		}
	}

	cout << cnt << "\n" << mx;
}
	
