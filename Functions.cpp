////                    LAMNAOUAR                    \\\\
#include <bits/stdc++.h>


#define ll long long
#define str string
#define rep(i, f, l) for(ll i = f;i < l; i++)
#define mrep(i, l, f) for(ll i = l;i > f; i--)
#define Malloc(type, size) (type*)malloc(sizeof(type)*size)
#define Calloc(type, size) (type*)calloc(size, sizeof(type))
#define MOD 1e6

ll Fact(ll n)
{
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

ll Comb(ll n, ll p){
    return factorial(n)/(factorial(p) * factorial(n - p));
}

ll Pow(ll x, ll y){
    ll res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = res*x;
        y = y>>1;
        x = x*x;
    }
    return res;
}

ll Powm(ll x, ll y, ll m){
    ll res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = res*x % m;
        y = y>>1;
        x = x*x % m;
    }
    return res;
}

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

bool is_prime(ll x){
    ll s = sqrt(x);
    rep(i, 2, s+1){
        if (x % i == 0) return false;
    }
    return true;
}

void Prime_Num(ll n){
    rep(i, 2, n) if (!Prime[i]) for(ll j = i; j < n; j+=i) Prime[j] = i;
}

void Print_Double_With_Precision(){
    cout << fixed;

    cout << setprecision(12);
}

void read_write_files(){
    freopen("a_example.in", "r", stdin);
    freopen("a_example.out", "w", stdout);
}