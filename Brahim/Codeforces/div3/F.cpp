#include <bits/stdc++.h>

#define ll long long
#define str string
#define rep(i, f, l) for(ll i = f;i < l; i++)
#define mrep(i, l, f) for(ll i = l;i > f; i--)
#define Malloc(type, size) (type*)malloc(sizeof(type)*size)
#define Calloc(type, size) (type*)calloc(size, sizeof(type))
#define N 200000

using namespace std;

inline int in() { int x; scanf("%d", &x); return x; }

typedef struct {
    int x;
    int t;
} t_x;

int BIT[N], a[N], n;
void update(int x, int delta)
{
    for(; x <= n; x += x&-x)
        BIT[x] += delta;
}
int query(int x)
{
    int sum = 0;
    for(; x > 0; x -= x&-x)
        sum += BIT[x];
    return sum;
}

int main(){
    ll     n = in();

    ll x[n];
    ll t[n];
    rep(i, 0, n) x[i] = in();
    rep(i, 0, n) t[i] = in();

    ll s = 0;
    rep(i, 0, n-1) {
        rep(j, i+1, n) {
            if ((x[i] < x[j] && t[i] <= t[j]) || (x[j] < x[i] && t[j] <= t[i])) s += abs(x[i] - x[j]);
        }
    }

    cout << s << "\n";
    return (0);
}