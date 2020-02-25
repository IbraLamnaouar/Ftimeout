#include <iostream>
#include <math.h>

#define ll long long
#define str string
#define rep(i, f, l) for(int i = f;i < l; i++)
#define mrep(i, f, l) for(int i = l - 1;i >= f; i--)
#define MOD 1000000007


using namespace std;

ll Powm(ll x, ll y){
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

int main(){
    ll     T, A, B, N, a, b, s, p;

    cin >> T;

    while(T-- && cin >> A >> B >> N){
        a = (Powm(A, N) + Powm(B, N));
        b = abs(A - B);
        if (b == 0) {
            cout << a << "\n";
        } else if (a == 0) {
            cout << b << "\n";
        } else {
            s = min(sqrt(b), sqrt(a));
            p = 1;
            rep(i, 2, s+1){
                if (b % i == 0 && a % i == 0) p = i;
            }
            cout << p << "\n";
        }
    }



    return (0);
}