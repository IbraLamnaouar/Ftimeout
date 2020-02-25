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
    ll     t = in(), a, b;


    while (t--) {
        a = in();
        b = in();

        if (a == b) cout << 0 << "\n";
        else if (a > b && (a - b) % 2 == 0) cout << 1 << "\n";
        else if (a < b && (b - a) % 2 == 1) cout << 1 << "\n";
        else cout << 2 << "\n";
    }

    return (0);
}