#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ll     n, m, a;

    cin >> n >> m >> a;

    cout << (ll)ceil((double)n / a) * (ll)ceil((double)m / a) << endl;

    return (0);
}