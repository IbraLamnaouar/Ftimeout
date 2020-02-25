#include <bits/stdc++.h>

#define ll long long
#define str string
#define rep(i, f, l) for(ll i = f;i < l; i++)
#define mrep(i, f, l) for(ll i = l - 1;i >= f; i--)
#define Malloc(type, size) (type *)malloc(sizeof(type) * size)

ll D;

using namespace std;

typedef struct {
   ll index;
   ll N;
   ll T;
   ll M;
   ll moy;
   ll score;
   set<pair<ll, ll>> B;
} t_L;


bool sorting_mechanism(t_L L1, t_L L2) {
    return L1.T < L2.T;
}


int main(){

    ll B, L, a, score, Current_Day = 0, Sub_Lib = 0, Sub_Day = 0;

    freopen("a_example.txt", "r", stdin);
    freopen("1-a_example.txt", "w", stdout);


    cin >> B >> L >> D;

    ll Books[B];
    set<pair<ll, ll>> Books_2;

    rep(i, 0, B){
        cin >> Books[i];
        Books_2.insert({-Books[i], i});
    }

    vector<t_L> Ls;

    rep(i, 0, L) {
        t_L Lib;
        Lib.index = i;
        cin >> Lib.N >> Lib.T >> Lib.M;
        score = 0;
        rep(j, 0, Lib.N){
            cin >> a;
            Lib.B.insert({-Books[a], a});
            score += Books[a];
        }
        Lib.score = score;
        Lib.moy = score/Lib.N;
        Ls.push_back(Lib);
    }

    sort(Ls.begin(), Ls.end(), sorting_mechanism);

    map<ll, vector<ll>> Out_B;
    set<ll> Scanned;


    while(Current_Day++ < D){

        rep(i, 0, Sub_Lib){
            ll j = 0;
            while (j < Ls[i].M && Ls[i].B.size() > 0) {
                auto y = Ls[i].B.begin();
                auto it = Books_2.upper_bound({-Books[y->second], y->second});
                int p = 0;
                it--;
                if (it->second == y->second) {
                    p = 1;
                }
                if (p == 1) {
                    if (Scanned.find(y->second) == Scanned.end()) {
                        Out_B[Ls[i].index].push_back(y->second);
                        Scanned.insert(y->second);
                        j++;
                    }
                    Ls[i].B.erase(Ls[i].B.begin());
                }
            }
        }

        if (Sub_Day == Ls[Sub_Lib].T - 1){
            Sub_Day = 0;
            Sub_Lib++;
        }else {
            Sub_Day++;
        }
    }

    cout << Out_B.size() << "\n";

    for (auto x = Out_B.begin(); x != Out_B.end() ; x++) {
        cout << x->first << " " << x->second.size() << "\n";
        for (auto y : x->second) cout << y << " ";
        cout << "\n";
    }

    return (0);
}