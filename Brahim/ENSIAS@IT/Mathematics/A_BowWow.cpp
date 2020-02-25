#include <bits/stdc++.h>

#define ll long long
#define str string
#define rep(i, f, l) for(int i = f;i < l; i++)
#define mrep(i, f, l) for(int i = l - 1;i >= f; i--)

using namespace std;

int main(){
    str s;
    int p;

    cin >> s;

    int s_size = s.size();
    p = 0;
    if (s_size % 2 != 0) {
        p = 1;
        mrep(i, 1, s_size) {
            if (s[i] == '1') {
                p = 0;
                break;
            }
        }
    }
    cout << (ll)ceil((double)s_size / 2) - p << "\n";
    return (0);
}