#include <bits/stdc++.h>

using namespace std;

#define ll long long

inline int in() { int x; scanf("%d", &x); return x; }

int main(){
    ll n = in(), a;
    vector<ll> age;


    for(ll i = 0; i < n; i++) {
        a = in();
        age.push_back(a);
    }

    sort(age.begin(), age.end());



    ll ans = 0;

    /*while(age.size() > 1) {
        auto it = age.end();
        it--;
        for (auto x = age.begin(); x != it;) {
            ll y = (*x)&(*it);
            if (y == 0) {
                cout << *x << " and  " << *it << "are friends\n";
                ans += *it;
                age.remove(*x);
            }
            else x++;
        }
        age.erase(it);
    }*/

    while(age.size() > 1) {
        auto it = age.begin();
        auto x = age.end();
        x--;
        while (x != it) {
            ll y = (*x)&(*it);
            if (y == 0) {
                cout << *x << " and  " << *it << "are friends\n";
                ans += *x;
                break;
            }
            x--;
        }
        age.erase(it);
    }

    cout << ans << "\n";

    return (0);
}