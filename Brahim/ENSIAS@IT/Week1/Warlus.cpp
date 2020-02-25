#include <bits/stdc++.h>

using namespace std;

int bs(int i, int j, int x, int m[]) {
    if (x < m[i]) return -1;
    if (x > m[j]) return j + 1;
    while (i < j){
        int md = (i + j)/2;
        if (m[md] >= x) j = md;
        else i = md + 1;
    }
    return j;
}

int main(){
    int     n;
    int     p;

    cin >> n;

    int arr[n];
    int m[n];

    for(int i = 0; i < n; i++) cin >> arr[i];
    m[n-1] = arr[n-1];
    for(int i = n - 2; i >= 0; i--) m[i] = min(arr[i], m[i+1]);

    for (int i = 0; i < n - 1; ++i) {
        p = bs(i + 1, n-1, arr[i], m);
        if (p == -1) cout << "-1 ";
        else cout << p - i - 2 << " ";
    }
    cout << "-1\n";

    return (0);
}