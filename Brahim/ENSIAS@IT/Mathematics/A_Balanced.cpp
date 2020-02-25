#include <bits/stdc++.h>

#define ll long long
#define str string
#define rep(i, f, l) for(int i = f;i < l; i++)
#define mrep(i, f, l) for(int i = l - 1;i >= f; i--)


using namespace std;

int main(){
    int t, n, p;
    int pp, nn;



    cin >> t;
    int arr[t];
    p = 0;
    n = 0;
    rep(i, 0, t) {
        cin >> arr[i];
        if (arr[i] % 2 == 1 && arr[i] > 0) p++;
        else if(arr[i] % 2 == -1 && arr[i] < 0) n++;
    }

    nn = 0;
    pp = 0;

    rep(i, 0, t) {
        if (arr[i] % 2 == 1 && arr[i] > 0){
            if (pp == 0 && p % 2 == 1){
                cout << ceil((double)arr[i] / 2) << "\n";
                p--;
            } else if (pp == 1) {
                cout << arr[i] / 2 << "\n";
                pp = 0;
                p--;
            } else {
                cout << ceil((double)arr[i] / 2) << "\n";
                p--;
                pp = 1;
            }
        } else if (arr[i] % 2 == -1 && arr[i] < 0){
            if (n % 2 == 1 && nn == 0){
                cout << floor((double)arr[i] / 2) << "\n";
                n--;
            } else if (nn == 1) {
                cout << arr[i] / 2 << "\n";
                n--;
                nn = 0;
            } else {
                cout << floor((double)arr[i] / 2) << "\n";
                n--;
                nn = 1;
            }
        } else {
            cout << arr[i] / 2 << "\n";
        }
    }

    return (0);
}