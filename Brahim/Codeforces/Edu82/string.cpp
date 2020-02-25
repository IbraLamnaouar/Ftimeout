#include <iostream>
#include <string>

using namespace std;

void main() {
    long long t, n, p = 0;
    string a, b, c;

    cin >> t;

    while(t-- && cin >> a >> b >> c){
        p = 0;
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] != c[i] && b[i] != c[i]){
                p = 1;
            }
        }
        cout << (p) ? "NO" : "YES" << endl;
    }


}
