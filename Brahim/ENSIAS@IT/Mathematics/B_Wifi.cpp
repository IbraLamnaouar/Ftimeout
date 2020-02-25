#include <bits/stdc++.h>

#define ll long long
#define dd double
#define str string
#define rep(i, f, l) for(ll i = f;i < l; i++)
#define mrep(i, f, l) for(ll i = l - 1;i >= f; i--)

using namespace std;

ll factorial(ll n)
{
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

ll Comb(ll p, ll n){
    return factorial(n)/(factorial(p) * factorial(n - p));
}


int main(){
    str     s;
    str     r;

    ll ps = 0, pr = 0, mr = 0, ms = 0, q = 0;
    dd p, m, c;

    cin >> s >> r;

    rep(i, 0, (ll)s.size()) {
        if (s[i] == '+') ps++;
        else ms++;
    }
    rep(i, 0, (ll)r.size()) {
        if (r[i] == '+') pr++;
        else if (r[i] == '-') mr++;
        else q++;
    }
    cout << fixed;

    if (q != 0 && pr <= ps && mr <= ms && q == ps - pr + ms - mr){
        p = powf(0.5, ps-pr);
        m = powf(0.5, ms-mr);
        c = (dd)Comb(ps - pr, q);
        cout << setprecision(12) << c * p * m << "\n";
    } else if (q == 0 && pr == ps && mr == ms) {
        cout << setprecision(12) << (dd)1 << "\n";
    } else {
        cout << setprecision(12) << (dd)0 << "\n";
    }

    return (0);
}