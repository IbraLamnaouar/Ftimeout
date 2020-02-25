#include <bits/stdc++.h>

#define ll long long
#define str string
#define rep(i, f, l) for(ll i = f;i < l; i++)
#define mrep(i, l, f) for(ll i = l;i > f; i--)
#define Malloc(type, size) (type*)malloc(sizeof(type)*size)
#define Calloc(type, size) (type*)calloc(size, sizeof(type))
#define MOD 1073741824



using namespace std;

ll divs(ll x, ll arr[]){
    if (arr[x] == 0){
        ll a = 1;
        ll s = sqrt(x);
        if (x != 1) a++;
        rep(i, 2, s + 1) {
            if (x % i == 0){
                a++;
                if (x / i != i) a++;
            }
        }
        arr[x] = a;
    }
    return arr[x];
}

int main(){
    ll     a, b, c;

    cin >> a >> b >> c;

    ll *arr;
    arr = Calloc(ll, a*b*c + 1);
    ll s = 0;
    mrep(i, a, 0) {
        mrep(j, b, 0) {
            mrep(k, c, 0){
                s += divs(i * j * k, arr) % MOD;
                //cout << "d(" << i << " . " << j << " . " << k << ") = " << divs(i * j * k, arr) << "\n";
            }
        }
    }

    cout << s << "\n";
    return (0);
}