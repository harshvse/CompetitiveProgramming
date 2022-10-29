#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    cout << n << " ";
    while (n != 1) {
        if (n & 1) {
            n = n * 3 + 1;
            cout << n << " ";
        } else {
            n = n / 2;
            cout << n << " ";
        }
    }

    return 0;
}