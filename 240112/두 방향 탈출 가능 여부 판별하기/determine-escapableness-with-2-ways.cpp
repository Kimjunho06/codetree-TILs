#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> visited;
vector<vector<int>> board;
int dx[2] = {0, 1};
int dy[2] = { 1, 0 };
bool check;

void DFS(int x, int y) {
	for (int i = 0; i < 2; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx > board[0].size() - 1) continue;
		if (ny < 0 || ny > board.size() - 1) continue;

		if (!visited[ny][nx] && board[ny][nx] == 1) {
			visited[ny][nx] = true;
			if (nx == board[0].size() - 1 && ny == board.size() - 1) {
				check = true;
			}
			DFS(nx, ny);
		}
	}
}

int main() {
	int n, m, a;

	cin >> n >> m;
	visited.resize(n);
	board.resize(n);
	
	for (int i = 0; i < n; i++) {
		board[i].resize(m);
		visited[i].resize(m);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a;

			board[i][j] = a;
		}
	}

	visited[0][0] = true;
	DFS(0, 0);

	if (check)
		cout << "1";
	else
		cout << "0";
}