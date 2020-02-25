#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long t, n, a, b, k, m;
    vector<long long> Queue;
    vector<long long>::iterator it;

    cin >> t;

    while(t-- && cin >> n){
        k = 0;
        m = 0;
        while(n-- && cin >> a){
            Queue.push_back(a);
            if(a != -1) {
                k += a;
                m++;
            }
        }
        if (m != 0) {
            k = k / m;
        }else {
            k = 42;
        }
        m = -1;
        for (auto x = Queue.begin(); x != Queue.end(); x++) {
            it = x;
            x++;
            if (x == Queue.end()) {
                break;
            }
            if (*x == -1) {
                a = k;
            } else {
                a = *x;
            }
            if (*it == -1) {
                b = k;
            } else {
                b = *it;
            }

            if (m < max(a, b) - min (a, b)) {
                m = max(a, b) - min (a, b);
            }
        }

        cout << m << " " << k << endl;
    }

    return (0);
}
