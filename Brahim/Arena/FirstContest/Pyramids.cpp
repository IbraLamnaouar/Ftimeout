#include <iostream>
#include <vector>
#include <set>
#include <bits/stdc++.h>

using namespace std;

int                     main() {
    string              word;
    vector<long long>   Queue;
    long long           n;
    long long           q;
    char                c;
    long long           l;
    long long           index;
    long long           sum;
    long long           size;
    map<char, long long> Letters;
    map<char, long long>::iterator Letter;

    cin >> n;
    cin >> word;
    cin >> q;

    size = word.size();

    for (long long i = 0; i < q; ++i) {
        cin >> l;
        cin >> c;
        Letter = Letters.find(c);
        if (Letter == Letters.end()) {
            sum = count(word.begin(), word.end(), c);
            Letters.insert({c, sum});
        } else {
            sum = Letter->second;
        }

        index = ((l * (l - 1)) / 2) % size;
        sum = sum * (l / size);
        l = l % size;
        for (long long j = 0; j < l; ++j) {
            if (c == word[(index + j) % size]) {
                sum++;
            }
        }
        Queue.push_back(sum);
    }

    for (auto x : Letters) {
        cout << x.first << ": " << x.second << endl;
    }

    for (auto x:Queue) {
        cout << x << endl;
    }

    return(0);
}
