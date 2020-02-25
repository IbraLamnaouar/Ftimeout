#include <bits/stdc++.h>

using namespace std;

int main() {
    string t,s;
    char letter;
    long long sum, T, i, k, l_sum, j, p, t_size, s_size, n;
    int first;
    vector<long long> Letters;

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    while(T-- && cin >> s >> t) {
        sum = 0;
        i = 0;
        j = 0;
        t_size = t.size();
        s_size = s.size();
        k = 0;
        letter = s[0];
        l_sum = 0;
        first = 1;
        p = 1;
        n = 0;
        while(i < t_size) {

            if (first == 1) {
                if (s[j] == letter){
                    l_sum++;
                }else{
                    letter = s[j];
                    Letters.push_back(l_sum);
                    l_sum = 1;
                    k++;
                }
            }

            if(t[i] == s[j]) {
                i++;
                p = 0;
                j++;
                if (j < s_size && s[j-1] == s[j]){
                    n++;
                } else if(j < s_size) {
                    n = 0;
                    k++;
                }
            } else if (first == 0) {
                j += Letters[k] - n;
                k++;
                n = 0;
            } else {
                j++;
            }

            if(j == s_size) {
                p++;
                if(p == 2) {
                    sum = -1;
                    break;
                }
                sum++;
                j = 0;
                k = 0;
                n = 0;
                first = 0;
            }
        }
        if (j != 0 && sum != -1) {
            sum++;
        }
        Letters.clear();
        cout << sum << "\n";
    }
    i = 0;
    for(auto x : Letters) {
        cout << i++ << ": " << x << endl;
    }
}