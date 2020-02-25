#include <bits/stdc++.h>

#define ll long long
#define str string
#define rep(i, f, l) for(ll i = f;i < l; i++)
#define mrep(i, l, f) for(ll i = l;i > f; i--)
#define MOD 1e6

using namespace std;

inline int in() { int x; scanf("%d", &x); return x; }

int main(){
    ll n = in();

    ll arr[n];

    rep(i, 0, n) arr[i] = in();

    ll cnt = 0;

    rep(i, 1, n) rep(j, 0, i) if (arr[j] > arr[i]) cnt++;

    cout << fixed;

    cout << setprecision(6) << (cnt % 2 ? (double) (2 * cnt - 1) : (double) (2 * cnt)) << "\n";


    return (0);
}