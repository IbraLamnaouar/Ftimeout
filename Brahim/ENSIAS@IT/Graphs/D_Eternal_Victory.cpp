#include <bits/stdc++.h>

using namespace std;

#define ll long long

inline int in() { int x; scanf("%d", &x); return x; }

ll ans = 0;

ll     shortest(vector<pair<int, int>> adj[], int a, int w) {
    if (adj[a].empty()) return w;
    ll m = 0;
    ll x;
    for(unsigned int i = 0;i < adj[a].size(); i++) {
        x = shortest(adj, adj[a][i].first, adj[a][i].second);
        ans += 2 * min(m, x);
        m = max(m, x);
    }
    return m + w;
}

int main(){
    int     n = in(), a, b, w;
    vector<pair<int, int>> adj[n+1];
    for(int i = 1;i < n; i++) {
        a = in();
        b = in();
        w = in();
        adj[a].push_back(make_pair(b, w));
    }

    cout << ans + shortest(adj, 1, 0) << "\n";

    return (0);
}