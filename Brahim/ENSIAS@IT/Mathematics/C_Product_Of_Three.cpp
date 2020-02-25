#include <bits/stdc++.h>

#define ll long long
#define str string
#define rep(i, f, l) for(ll i = f;i < l; i++)
#define mrep(i, l, f) for(ll i = l;i > f; i--)
#define Malloc(type, size) (type*)malloc(sizeof(type)*size)
#define Calloc(type, size) (type*)calloc(size, sizeof(type))
#define MAX 1000000001

using namespace std;

inline int in() { int x; scanf("%d", &x); return x; }

int main(){
    ll     t = in(), x, p;

    vector<ll> Out;

    while(t--) {
        ll n = in();
        x = 3;
        ll i = 2;
        while(n > 1 && x && i <= n) {
            if (n % i == 0){
                Out.push_back(i);
                n /= i;
                x--;
            }
            else i++;
        }
        if (x != 0) cout << "NO\n";
        else {
            cout << "YES\n";
            for (auto u : Out) cout << u << " ";
            cout << "\n";
        }
        Out.clear();
    }

    return (0);
}