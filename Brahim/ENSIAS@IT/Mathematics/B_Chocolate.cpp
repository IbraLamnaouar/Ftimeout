#include <bits/stdc++.h>

#define ll long long
#define str string
#define rep(i, f, l) for(int i = f;i < l; i++)
#define mrep(i, f, l) for(int i = l - 1;i >= f; i--)


using namespace std;

int main(){
    ll     n, p, m, f, z;
    //freopen("a_example.in", "r", stdin);
    //freopen("a_example.out", "w", stdout);

    cin >> n;

    m = 0;
    z = 1;
    f = 0;
    while (n-- && cin >> p) {
        if (f == 0 && p == 1) {
            z = 1;
            f = 1;
            m = 1;
        } else if(p == 1) {
            m *= z;
            z = 1;
        } else {
            z++;
        }
    }

    cout << m << "\n";

    return (0);
}