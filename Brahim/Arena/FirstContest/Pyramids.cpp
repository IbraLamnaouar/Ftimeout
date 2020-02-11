#include <iostream>
#include <vector>
#include <set>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    vector<int> Queue;
    int     n;
    int     q;
    char    c;
    int     l;
    int     index;
    int     sum;


    cin >> n;
    cin >> word;
    cin >> q;

    int     size = word.size();

    cout << size << endl;

    for (int i = 0; i < q; ++i) {
        cin >> l;
        cin >> c;
        index = ((l * (l - 1)) / 2) % size;
        sum = 0;
        for (int j = 0; j < l; ++j) {
            if (c == word[(index + j) % size]) {
                sum++;
            }
        }
        Queue.push_back(sum);
    }

    for (auto x:Queue) {
        cout << x << endl;
    }

    return(0);
}
