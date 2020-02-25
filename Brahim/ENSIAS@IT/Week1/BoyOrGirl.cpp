#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    vector<char> Letters;

    cin >> s;

    int i = 0;
    int s_size = s.size();

    while(i < s_size){
        if (find(Letters.begin(), Letters.end(), s[i]) == Letters.end()) {
            Letters.push_back(s[i]);
        }
        i++;
    }

    if (Letters.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << "\n";
    } else {
        cout << "IGNORE HIM!" << "\n";
    }

    return (0);
}