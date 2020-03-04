#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define str string
#define rep(i, f, l) for(int i = f;i < l; i++)


#define Malloc(type, size) (type*)malloc(sizeof(type)*size)
#define Calloc(type, size) (type*)calloc(size, sizeof(type))

inline int in() { int x; scanf("%d", &x); return x; }

int *bg, *nd;
vector<int> ans;
vector<int> *adj;

void     trans(int a, int flip0, int flip1, int flip) {
    int w = 0;
    if (flip == 0) {
        if (flip0 == 1 && bg[a-1] == nd[a-1]) w = 1;
        if (flip0 == 0 && bg[a-1] != nd[a-1]) w = 1;
        if (w == 1) {
            flip0 = (flip0 + 1) % 2;
            ans.push_back(a);
        }
    } else {
        if (flip1 == 1 && bg[a-1] == nd[a-1]) w = 1;
        if (flip1 == 0 && bg[a-1] != nd[a-1]) w = 1;
        if (w == 1) {
            flip1 = (flip1 + 1) % 2;
            ans.push_back(a);
        }
    }
    for (auto e : adj[a]) {
        trans(e, flip0, flip1, (flip + 1) % 2);
    }
}



int main(){
    int     n = in(), a, b;
    int *processed = Calloc(int, n+1);
    adj = Calloc(vector<int>, n+1);
    processed[1] = 1;
    rep(i, 1, n) {
        a = in();
        b = in();
        if (processed[a] == 1) {
            adj[a].push_back(b);
            processed[b] = 1;
        } else {
            adj[b].push_back(a);
            processed[a] = 1;
        }
    }

    bg = Malloc(int, n+1);
    nd = Malloc(int, n+1);


    for(int i = 0;i < n; i++) bg[i] = in();
    for(int i = 0;i < n; i++) nd[i] = in();

    trans(1, 0, 0, 0);

    cout << ans.size() << "\n";
    for(auto e : ans) cout << e << "\n";

    free(bg);
    free(nd);
    free(processed);
    free(adj);
    return (0);
}