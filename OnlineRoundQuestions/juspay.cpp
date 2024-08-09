#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

const int INF = 1e9;

vector<pair<int, int>> adj[10001];
int dist[10001];
bool visited[10001];

void dijkstra(int start) {
    for (int i = 1; i <= 10000; i++) {
        dist[i] = INF;
        visited[i] = false;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});
    dist[start] = 0;

    while (!pq.empty()) {
        int cur = pq.top().second;
        pq.pop();

        if (visited[cur]) continue;
        visited[cur] = true;

        for (int i = 0; i < adj[cur].size(); i++) {
            int next = adj[cur][i].first;
            int cost = adj[cur][i].second;

            if (dist[next] > dist[cur] + cost) {
                dist[next] = dist[cur] + cost;
                pq.push({dist[next], next});
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    map<string, int> name;
    int cnt = 1;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        name[s] = cnt++;
    }

    for (int i = 0; i < m; i++) {
        string a, b;
        int t;
        cin >> a >> b >> t;
        int u = name[a];
        int v = name[b];
        adj[u].push_back({v, t});
    }

    string start, end;
    cin >> start >> end;
    int s = name[start];
    int e = name[end];

    dijkstra(s);

    if (dist[e] == INF) cout << -1 << endl;
    else cout << dist[e] << endl;

    return 0;
}
