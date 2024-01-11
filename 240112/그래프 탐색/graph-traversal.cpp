#include <iostream>
#include <vector>

using namespace std;

vector<bool> visited;
vector<vector<int>> board;
int cnt;
void DFS(int n) {
	for (int i = 0; i < board[n].size(); i++) {
		if (!visited[board[n][i]]) {
			cnt++;
			visited[board[n][i]] = true;
			DFS(board[n][i]);
		}
	}
}

int main() {
	int n, m, a, b;

	cin >> n >> m;
	visited.resize(n + 1);
	board.resize(n + 1);

	for (int i = 0; i < m; i++) {
		cin >> a >> b;

		board[a].push_back(b);
		board[b].push_back(a);
	}

	visited[1] = true;
	DFS(1);

	cout << cnt;
}