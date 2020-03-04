#include <bits/stdc++.h>

using namespace std;

#define ll long long

inline int in() { int x; scanf("%d", &x); return x; }

int main(){
    int n = in(), m = in();

    int a1 = 4;
    int a2 = 5;
    int x;
    if (m == 0) {
        x = n;
        while (n--){
            cout << x++ << " ";
        }
        cout << "\n";
        return (0);
    }
    if (n - 2 < m) {
        cout << "-1\n";
        return (0);
    }
    cout << a1 << " ";
    x = a1;
    a1 = a2;
    a2 = x+a2;
    n--;
    while (m-- && n--) {
        cout << a1 << " ";
        x = a1;
        a1 = a2;
        a2 = x+a2;
    }
    x = a1 + 1;
    while (n--) {
        cout << a1 << " ";
        a1 += x;
        x = a1;
    }
    cout << "\n";

    return (0);
}