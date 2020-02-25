#include <iostream>
#include <string>

using namespace std;

int main() {
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

        if (p) {
            cout << "NO" << endl;
        }else {
            cout << "YES" << endl;
        }
    }

    return (0);
}
