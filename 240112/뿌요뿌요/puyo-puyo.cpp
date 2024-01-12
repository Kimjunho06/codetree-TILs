#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> visited;
vector<vector<int>> board;
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0  };
int cnt, num;

int DFS(int x, int y) {
	num = board[y][x];
	visited[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx > board[0].size() - 1) continue;
		if (ny < 0 || ny > board.size() - 1) continue;

		if (!visited[ny][nx] && board[ny][nx] == num) {
			cnt++;
			DFS(nx, ny);
		}
	}

	return cnt;
}

int main() {
	int n;

	cin >> n;
	visited.resize(n);
	board.resize(n);

	for (int i = 0; i < n; i++) {
		board[i].resize(n);
		visited[i].resize(n);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}

	int tmp, max = 0, block_cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (visited[i][j] == false)
			{
				cnt = 1;
				tmp = DFS(j, i);
				if (tmp >= 4) block_cnt++;
				if (tmp > max) max = tmp;

			}
		}
	}

	cout << block_cnt << " " << max;
}