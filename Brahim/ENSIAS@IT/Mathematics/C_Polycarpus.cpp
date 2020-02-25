#include <bits/stdc++.h>

#define ll long long
#define str string
#define rep(i, f, l) for(int i = f;i < l; i++)
#define mrep(i, f, l) for(int i = l - 1;i >= f; i--)
#define MOD 1000000007


using namespace std;

int main(){
    ll     t, n, A, d, a, s;

    vector<ll> MaxEle;
    vector<ll> Dices;
    vector<ll> Out;

    cin >> n >> A;
    t = n;
    s = 0;
    while (t-- && cin >> d) {
        a = 0;
        if (A - (n - 1) < d) a = d - (A - (n - 1));
        Dices.push_back(a);
        if (a == 0) a = d;
        else a = A - (n - 1);
        s += a;
        MaxEle.push_back(a);
    }

    rep(i, 0, n) {
        a = Dices[i];
        if (s-MaxEle[i] < A) a += A - (s-MaxEle[i]) - 1;
        Out.push_back(a);
    }

    for(ll x : Out) cout << x << " ";
    cout << "\n";

    return (0);
}