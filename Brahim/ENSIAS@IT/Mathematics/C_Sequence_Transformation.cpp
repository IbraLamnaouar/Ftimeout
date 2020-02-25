#include <bits/stdc++.h>

#define ll long long
#define rep(i, f, l) for(ll i = f;i < l; i++)

using namespace std;


void    transform(ll n, ll coef, vector<ll> Seq, vector<ll>& Out) {
    if (n == 1) {
        Out.push_back(coef);
        return;
    }
    if (n == 2) {
        Out.push_back(coef);
        Out.push_back(2*coef);
        return;
    }
    if (n == 3) {
        Out.push_back(coef);
        Out.push_back(coef);
        Out.push_back(3*coef);
        return;
    }
    rep(i, 0, n){
        if (Seq[i] % 2 == 1) Out.push_back(coef);
    }
    transform(n/2, coef*2, Seq, Out);
}

int main(){
    ll     n;

    cin >> n;

    vector<ll> N(n);
    vector<ll> Out;

    iota(N.begin(), N.end(), 1);

    transform(n, 1, N, Out);

    for (auto x : Out) cout << x << " ";

    cout << "\n";
    return (0);
}