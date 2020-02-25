#include <bits/stdc++.h>

using namespace std;

int main(){
    int     t;
    char    c;
    long long a = 0;
    long long d = 0;

    cin >> t;

    while(t-- && cin >> c){
        if (c == 'A'){
            a++;
        }

        if (c == 'D'){
            d++;
        }


    }
    if (a > d) {
        cout << "Anton" << "\n";
    } else if (d > a) {
        cout << "Danik" << "\n";
    } else {
        cout << "Friendship" << "\n";
    }
    return (0);
}