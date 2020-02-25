#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define str string
#define rep(i, f, l) for(ll i = f;i < l; i++)
#define Malloc(type, size) (type*)malloc(sizeof(type)*size)

#define Calloc(type, size) (type*)calloc(size, sizeof(type))

#define MAX 1000001

inline int in() { int x; scanf("%d", &x); return x; }

int main(){
    ll     n = in(), k = in(), a;


    ll *Prime =  Calloc(ll, MAX);
    ll *ppcm = Calloc(ll, MAX);
    rep(i, 2, MAX) if (!Prime[i]) for(ll j = i; j < MAX; j+=i) Prime[j] = i;

    while (n--) {
        a = in();
        while (a > 1) {
            ll P = Prime[a];
            ll pp = 0;
            while (a % P == 0) {
                pp++;
                a /= P;
            }
            ppcm[P] = max(ppcm[P], pp);
        }
    }

    int p = 1;
    while(k > 1 && p == 1) {
        p &= (ppcm[Prime[k]] > 0);
        ppcm[Prime[k]]--;
        k /= Prime[k];
    }

    cout << (p ? "YES\n" : "NO\n");

    free(ppcm);
    free(Prime);
    return (0);
}