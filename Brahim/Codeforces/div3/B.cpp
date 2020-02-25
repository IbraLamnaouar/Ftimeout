#include <bits/stdc++.h>

#define ll long long
#define str string
#define rep(i, f, l) for(ll i = f;i < l; i++)
#define mrep(i, l, f) for(ll i = l;i > f; i--)
#define Malloc(type, size) (type*)malloc(sizeof(type)*size)
#define Calloc(type, size) (type*)calloc(size, sizeof(type))
#define MOD 1e6

using namespace std;

inline int in() { int x; scanf("%d", &x); return x; }

int main(){
    ll     t = in(), n, m, pp;

    while (t--) {
        n = in();
        m = in();
        ll *a = Calloc(ll, n);
        ll *p = Calloc(ll, max((int)n, (int)m));

        rep(i, 0, n) a[i] = in();
        rep(i, 0, m) {
            pp = in();
            if (!p[pp-1]) p[pp-1] = 1;
        }
        pp = 1;

        rep(i, 1, n) {
            rep(j, 0, i) {
                if (a[j] > a[i]) {
                    rep(k, j, i) {
                        if (p[k] == 0){
                            pp = 0;
                            break;
                        }
                    }
                    break;
                }
            }
            if (pp == 0) break;
        }

        cout << (pp ? "YES\n" : "NO\n");
    }

    return (0);
}