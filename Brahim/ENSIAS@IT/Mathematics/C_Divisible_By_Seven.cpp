#include <bits/stdc++.h>

#define ll long long
#define str string
#define rep(i, f, l) for(ll i = f;i < l; i++)
#define mrep(i, l, f) for(ll i = l;i > f; i--)


using namespace std;

void str_minus(str& a, str b){
    int i7tifad = 0;
    int i = a.size()-1;
    int j = b.size()-1;
    while(i >= 0 && j >= 0){
        if (a[i] >= b[j]+i7tifad){
            a[i] = '0' + a[i] - b[j] - i7tifad;
            i7tifad = 0;
        } else {
            a[i] = '0' + 10 + a[i] - b[j] - i7tifad;
            i7tifad = 1;
        }
        i--;
        j--;
    }
    while(i7tifad) {
        if (a[i] != '0'){
            a[i] = '0' + a[i] - '1';
            i7tifad = 0;
        } else {
            a[i] = '9';
            i7tifad = 1;
        }
        i--;
    }
    while(a[0] == '0' && a.size() > 1) a.erase(a.begin());
}

bool is_seven(str beg){
    while (beg.size() > 5) {
        char c = beg[beg.size()-1];
        beg.erase(--beg.end());
        ll d = 2 * (c - '0');
        str_minus(beg, to_string(d));
    }
    return stoll(beg) % 7 == 0;
}

bool is_divisible_by_7(str beg, str& out){
    str s;
    rep(i, 0, 24){
        s.insert(0, out);
        s.insert(0, beg);
        if (is_seven(s)) return true;
        s.clear();
        next_permutation(out.begin(), out.end());
    }
    return false;
}



int main(){

    str s;
    int a1 = 0, a6 = 0, a8 = 0, a9 = 0;


    cin >> s;

    str beg;
    str zer;
    for(auto x : s){
        if (a1 == 0 && x == '1') a1 = 1;
        else if (a8 == 0 && x == '8') a8 = 1;
        else if (a6 == 0 && x == '6') a6 = 1;
        else if (a9 == 0 && x == '9') a9 = 1;
        else if (x == '0') zer.push_back(x);
        else beg.push_back(x);
    }
    str out = "1869";
    if (is_divisible_by_7(beg, out)) cout << beg << out << zer << "\n";
    else cout << "0\n";
    return (0);
}

