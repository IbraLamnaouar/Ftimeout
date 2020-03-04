#include <bits/stdc++.h>

using namespace std;

#define ll long long

inline int in() { int x; scanf("%d", &x); return x; }

int main(){
    int n = in(), m = in();
    vector<int> adj[n];

    int a, b;
    for(int i = 1;i <= m; i++){
        a = in(); b = in();
        adj[a].push_back(b);
    }

    vector<pair<int, int>> out[n];

    for(int i = 1;i <= n; i++) out[i].push_back(make_pair(i, i));

    b = n+1;
    for (int j = 1; j <= n; ++j) {
        for(int e : adj[j]) {
            out[j].push_back(make_pair(j, b));
            out[e].push_back(make_pair(e, b));
            b++;
        }
    }

    for(int i = 1;i <= n; i++) {
        cout << out[i].size() << "\n";
        for (auto e : out[i]) cout << e.first << " " << e.second << "\n";
    }

    return (0);
}