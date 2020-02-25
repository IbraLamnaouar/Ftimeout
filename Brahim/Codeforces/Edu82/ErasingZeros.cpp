#include <iostream>
#include <string>
#include <vector>

using namespace std;

int     main() {
    int     t;
    string  s;
    int     sum;
    int     subsum;
    vector<int> Queue;
    int index;
    int p;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> s;
        sum = 0;
        index = 0;
        while (s[index] == '0') {
            index++;
        }
        p = 0;
        subsum = 0;
        while (index < s.size()) {
            if (p == 0 && s[index] == '1') {
                p = 1;
                sum += subsum;
            } else if (p == 1 && s[index] == '0') {
                subsum = 1;
                p = 0;
            } else if(s[index] == '0') {
                subsum++;
            }
            index++;
        }
        Queue.push_back(sum);
    }

    for(auto x : Queue) {
        cout << x << endl;
    }

    return (0);
}