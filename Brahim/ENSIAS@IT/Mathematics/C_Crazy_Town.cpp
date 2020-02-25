#include <bits/stdc++.h>

#define ll long long
#define str string
#define rep(i, f, l) for(ll i = f;i < l; i++)
#define mrep(i, l, f) for(ll i = l;i > f; i--)
#define Malloc(type, size) (type*)malloc(sizeof(type)*size)
#define Calloc(type, size) (type*)calloc(size, sizeof(type))

using namespace std;

inline int in() { int x; scanf("%d", &x); return x; }

int main(){
    ll     x1 = in(), y1 = in(), x2 = in(), y2 = in(), n = in(), a, b, c, ans = 0;

    while (n--){
        a = in();
        b = in();
        c = in();

        if ((a*x1 + b*y1 + c > 0 && a*x2 + b*y2 + c < 0) || (a*x1 + b*y1 + c < 0 && a*x2 + b*y2 + c > 0)) ans++;
    }
    cout << ans << "\n";
    return (0);
}