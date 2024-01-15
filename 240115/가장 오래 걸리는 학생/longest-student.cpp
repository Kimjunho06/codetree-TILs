#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int n, m;
vector<vector<int>> graph;
vector<bool> visited;
vector<int> dist;
int main() {
    cin >> n >> m;

    graph.resize(n + 1);
    visited.resize(n + 1);
    dist.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        graph[i].resize(n + 1);
    }

    for (int i = 0; i < m; i++)
    {
        int x, y, d;
        cin >> x >> y >> d;
        graph[x][y] = d;
        graph[y][x] = d;
    }

    for (int i = 1; i <= n; i++)
        dist[i] = INT_MAX;
    dist[n] = 0;

    for (int i = 1; i <= n; i++) {

        int idx = -1;
        for (int j = 1; j <= n; j++) {
            if (visited[j]) continue; 
            if (idx == -1 || dist[idx] > dist[j])
                idx = j;
        }

        visited[idx] = true;

        for (int j = 1; j <= n; j++) {
            if (graph[idx][j] == 0) continue;
            dist[j] = min(dist[j], dist[idx] + graph[idx][j]);
        }
    }
    
    int answer = 0;
    for (int i = 2; i <= n; i++) {
        if (dist[i] == INT_MAX) continue;
        else 
        {
            answer = max(answer, dist[i]);
        }
    }

    cout << answer;
}