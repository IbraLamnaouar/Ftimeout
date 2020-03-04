#include <bits/stdc++.h>

using namespace std;

int main(){

    string str;

    cin >> str;

    unsigned int j = str.size();
    unsigned int i = 0;

    int cnt = 0;
    int p = 1;
    while(j > i) {
        if (p){
            if (str[i] == '(') {
                cnt++;
            } else {
                p = 0;
                j--;
            }
        } else {
            if (str[j] == ')') {}
        }
    }
    return (0);
}