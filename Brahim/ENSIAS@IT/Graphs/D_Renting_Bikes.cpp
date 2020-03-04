#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, f, l) for(int i = f;i < l; i++)
#define mrep(i, l, f) for(int i = l;i > f; i--)
#define vrep(it, vect) for(auto it = vect.begin(); it != vect.end(); it++)
#define Malloc(type, size) (type*)malloc(sizeof(type)*size)
#define Calloc(type, size) (type*)calloc(size, sizeof(type))

#define pi pair<int, int>
#define pii pair<pi, int>

inline int in() { int x; scanf("%d", &x); return x; }

bool sortem(int a, int b) {
    return a > b;
}

int main(){
    int n = in(), m = in(), a = in();

    vector<int> students;
    vector<int> bikes;

    rep(i, 0, n) {
        int x = in();
        students.push_back(x);
    }

    rep(i, 0, m) {
        int x = in();
        bikes.push_back(x);
    }

    sort(bikes.begin(), bikes.end());
    sort(students.begin(), students.end(), sortem);

    ll max = 0, min = 0;

    vrep(it, students) {
        cout << "Student: " << *it << "\n";
        cout << "Bikes: ";
        for(auto e : bikes) cout << e << " ";
        cout << "\n";
        cout << "a = " << a << " max = " << max << " min = " << min << "\n";
        if (bikes.empty()) break;
        int p = 0;
        auto it_b = lower_bound(bikes.begin(), bikes.end(), *it);
        if (it_b == bikes.end()) {
            cout << "case1" << "\n";
            //if (a > *bikes.begin()) a -= *bikes.begin();
            //else {
            min += *bikes.begin();
            bikes.erase(bikes.begin());
            max++;
        } else if (it_b == bikes.begin() && (*it_b <= a || *it_b - a <= *it)){
            cout << "case2" << "\n";
            p = 1;
        } else if (it_b != bikes.begin()){
            cout << "case3" << "\n";
            auto it_b2 = it_b;
            it_b2--;
            if (*it - *it_b2 < *it_b - *it && (*it_b2 <= a || *it_b2 - a <= *it)) {
                cout << "case31" << "\n";
                it_b = it_b2;
                p = 1;
            } else if (*it_b <= a || *it_b - a <= *it) {
                cout << "case32" << "\n";
                p = 1;
            }
        }

        if (p == 1) {
            if (*it_b <= a) {
                a -= *it_b;
            } else {
                min += *it_b - a;
                a = 0;
            }
            max++;
            bikes.erase(it_b);
        }
    }



    cout << max << " " << min - (ll)a << "\n";
    return (0);
}