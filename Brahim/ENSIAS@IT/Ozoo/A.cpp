#include <bits/stdc++.h>

using namespace std;

#define ll long long

inline int in() { int x; scanf("%d", &x); return x; }

int main(){
    int t = in(), n, a;
    vector<int> brace;
    vector<int> neck;

    while(t--) {
        n = in();
        for(int i = 0; i < n; i++) {
            a = in();
            brace.push_back(a);
        }
        for(int i = 0; i < n; i++) {
            a = in();
            neck.push_back(a);
        }
        sort(brace.begin(), brace.end());
        sort(neck.begin(), neck.end());

        for(auto e : brace) cout << e << " ";
        cout << "\n";

        for(auto e : neck) cout << e << " ";
        cout << "\n";
        brace.clear();
        neck.clear();
    }


    return (0);
}