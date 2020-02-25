#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    string output;
    char c;

    cin >> s;
    int i = 0;
    int s_size = s.size();

    while(i < s_size){
        if (s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] != 'Y' && s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y'){
            if (s[i] >= 'A' && s[i] <= 'Z') {
                c = s[i] - 'A' + 'a';
            } else {
                c = s[i];
            }
            output.push_back('.');
            output.push_back(c);
        }
        i++;
    }
    cout << output << "\n";
    return (0);
}