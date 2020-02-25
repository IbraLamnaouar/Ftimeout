#include <bits/stdc++.h>

using namespace std;

int         main() {
    long long M, N, index, sum, a, p;
    set<pair<int, int>> Pizza;

    freopen("a_example.in", "r", stdin);
    freopen("a_example.out", "w", stdout);

    cin >> M >> N;

    index = 0;
    sum = 0;
    while(index < N && cin >> a){
        sum += a;
        Pizza.insert({a, index++});
    }


    auto it = Pizza.end();
    it--;
    auto y = it;
    y--;
    while (sum > M && y != Pizza.begin()) {
        if (sum - M > y->first){
            sum -= it->first;
            Pizza.erase(it);
        }
        it--;
        y--;
    }

    if (y == Pizza.begin()) {
        sum -= it->first;
        Pizza.erase(it);
        if (sum > M) {
            sum -= y->first;
            Pizza.erase(y);
        }
    }
    cout << Pizza.size() << "\n";
    for(auto x : Pizza){
        cout << x.second << " ";
    }
    cout << "\n";

    return (0);
}