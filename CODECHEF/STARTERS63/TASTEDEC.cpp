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

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        ll x, y;
        cin >> x >> y;
        ll chocolate = 2 * x;
        ll candy = 5 * y;

        if (chocolate > candy) {
            cout << "Chocolate" << endl;
        } else if (candy > chocolate) {
            cout << "Candy" << endl;
        } else {
            cout << "Either" << endl;
        }
    }

    return 0;
}