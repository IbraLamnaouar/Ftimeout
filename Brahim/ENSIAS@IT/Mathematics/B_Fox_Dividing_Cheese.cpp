#include <bits/stdc++.h>

#define ll long long
#define str string
#define rep(i, f, l) for(int i = f;i < l; i++)
#define mrep(i, f, l) for(int i = l - 1;i >= f; i--)


using namespace std;

int main(){
    ll     a, b, a2 = 0, a3 = 0, a5 = 0, b2 = 0, b3 = 0, b5 = 0;

    cin >> a >> b;

    while (a % 2 == 0 || a % 3 == 0 || a % 5 == 0){
        if (a % 2 == 0) {
            a2++;
            a /= 2;
        }
        if(a % 3 == 0) {
            a3++;
            a /= 3;
        }
        if(a % 5 == 0) {
            a5++;
            a /= 5;
        }
    }
    while (b % 2 == 0 || b % 3 == 0 || b % 5 == 0){
        if (b % 2 == 0) {
            b2++;
            b /= 2;
        }
        if(b % 3 == 0) {
            b3++;
            b /= 3;
        }
        if(b % 5 == 0) {
            b5++;
            b /= 5;
        }
    }

    if (a != b) cout << -1 << "\n";
    else cout << abs(a2-b2) + abs(a3-b3) + abs(a5-b5) << "\n";

    return (0);
}