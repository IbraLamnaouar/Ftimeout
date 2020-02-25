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
    ll     t = in(), a, b, c;

    while (t--) {
        a = in();
        b = in();
        c = in();


        cout << min(b % a, a-(b % a)) * 2 + min(c%b, b-(c%b)) << endl;
    }

    return (0);
}