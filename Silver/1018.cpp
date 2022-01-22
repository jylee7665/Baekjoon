#include <bits/stdc++.h>
using namespace std;

string board[52];
string WB[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};

string BW[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};


int W_cnt(int x, int y) {
	int cnt = 0;
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			if (board[i + x][j + y] != WB[i][j])
				cnt++;

	return cnt;
}

int B_cnt(int x, int y) {
	int cnt = 0;
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			if (board[i + x][j + y] != BW[i][j])
				cnt++;

	return cnt;
}
//1018
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> board[i];

	int mini = 64;
	for (int i = 0; i + 8 <= n; i++) {
		for (int j = 0; j + 8 <= m; j++) {

			int tmp = min(W_cnt(i, j), B_cnt(i, j));
			if (tmp < mini)
				mini = tmp;
		}
	}
	cout << mini;
}
