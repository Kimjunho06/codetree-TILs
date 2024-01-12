#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<vector<bool>> visited;
vector<vector<int>> board;
vector<int> answer;
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0  };

int cnt;

int DFS(int x, int y) {

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx > board[0].size() - 1) continue;
		if (ny < 0 || ny > board.size() - 1) continue;

		if (!visited[ny][nx] && board[ny][nx] == 1) {
			visited[ny][nx] = true;
			cnt++;
			DFS(nx, ny);
		}
	}

	if (cnt == 0)
		return 1;

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

	int house = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (visited[i][j] == false && board[i][j] == 1)
			{
				house++;
				cnt = 0;
				answer.push_back(DFS(j, i));
			}
		}
	}
	sort(answer.begin(), answer.end());

	cout << house << "\n";
	for (auto a : answer) {
		cout << a << "\n";
	}
}