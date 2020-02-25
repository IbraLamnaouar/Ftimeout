#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int     main() {
    int             t;
    long long       sum, d;
    long long       n, g, b;
    vector<long long> Queue;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;
        cin >> g;
        cin >> b;
        if (g > ceil(n / 2) || g >= b){
            sum = n;
        } else {
          d = ceil(((double)n / (double)2));
          d = ceil(((double)d / (double)g));
          d = d * g + (d - 1) * b;
          if (d < n) {
              sum = n;
          } else {
              sum = d;
          }
        }
        Queue.push_back(sum);
    }

    int i = 0;
    int k = 0;
    for (int j = 0; j < 1788; ++j) {
        if (j % 21 == 0) {
            i++;
        }
        if (i % 21 == 0) {
            k++;
        }
        cout << k + 1 << " " << (i % 21) + 1 << " " << (j % 21) + 1 << endl;
    }



    return (0);
}