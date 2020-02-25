#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    long long t, n, m, k, l;

    cin >> t;

    while(t-- && cin >> n >> m){

        if(m == 0) {
            cout << 0 << endl;
        } else if(n == m){
            cout << (m * (m + 1))/2 << endl;
        } else if(n-m == n/2 && m == n/2) {
            l = n--;
            m--;
            cout << l + 2*(pow(2, m+1)-2) << endl;
        }else if (m == n / 2){
            cout << 2*(pow(2, m+1)-2) << endl;
        } else if(n - m == n / 2) {
            cout << 2*(pow(2, m - 2) + m - 2) + pow(2, m-1) + 1 << endl;
        } else if (m < n - m){
            cout << ((n-2*m-1) / 2 + (n-2*m-1) % 2)*(2*m+(n-2*m-1)/2) + ((n-2*m-1)/2)*2*m +  2*(pow(2, m+1)-2) << endl;
        } else if (m > n - m){
            l = (n-2*(n - m)-1)/2;
            k = (l + (n-2*(n - m)-1)%2);
            cout << ((n * (n + 1)) / 2) - (((n-k)*(n-k+1))/2) + (l*(l + 1))/2 + l*(2*m - 1) + 2*(pow(2, m - 2) + m - 2) + pow(2, m-1) + 1 << endl;
        }

    }

    return (0);
}
