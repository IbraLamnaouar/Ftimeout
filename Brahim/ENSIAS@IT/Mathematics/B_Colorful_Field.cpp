#include <bits/stdc++.h>

#define Carott 0
#define Kiwi 1
#define Grape 2
#define Waste 3

using namespace std;

int main(){
    long long     n, m, k, t, i, j;
    set<long long> waste;
    string output[] = {"Carrots\n", "Kiwis\n", "Grapes\n"};

    cin >> n >> m >> k >> t;

    while (k-- && cin >> i >> j) waste.insert(m*(i - 1) + j - 1);

    while (t-- && cin >> i >> j) {
        k = m*(i - 1) + j - 1;
        auto it = waste.lower_bound(k);
        if (*it != k || it == waste.end()){
            cout << output[(k - distance(waste.begin(), it)) % 3];
        } else {
            cout << "Waste\n";
        }
    }

    return (0);
}