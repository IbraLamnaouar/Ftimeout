#include <bits/stdc++.h>

#define ll long long
#define str string
#define rep(i, f, l) for(int i = f;i < l; i++)
#define mrep(i, f, l) for(int i = l - 1;i >= f; i--)


using namespace std;

int main(){
    ll l, r;

    cin >> l >> r;

    cout << "YES\n";

    rep(i, 0, (r - l) / 2 + 1) cout << l + 2*i << " " << l + 2*i + 1 << "\n";

    return (0);
}