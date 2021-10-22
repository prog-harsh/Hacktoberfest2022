/*
* Author - Ayushman Chahar
* About  - IT Junior, VIT Vellore
*/

#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;
vector<vector<pair<int, int>>> adj;

void dijkstra(int s, vector<int> & d, vector<int> & p) {
    int n = adj.size();
    d[s] = 0;
    using pii = pair<int, int>;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});
    while (!q.empty()) {
        int v = q.top().second;
        int d_v = q.top().first;
        q.pop();
        if (d_v != d[v])
            continue;

        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;

            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
                q.push({d[to], to});
            }
        }
    }
}

void solve() {
    int n; cin >> n; // number of vertices;
    int m; cin >> m; // numner of edges;
    adj.resize(n + 1);
    for(int i = 0; i < m; i++) {
        int a, b, c; // edge from a -> b with distance as c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
    vector<int> distance, predecessors;
    distance.assign(n + 1, INF);
    predecessors.assign(n + 1, -1);
    dijkstra(1, distance, predecessors);
    // distance vector now contains shortest distance from node 1 to kth node (where 2 <= k <= n);
}

int main() {
    solve();
    return 0;
} 