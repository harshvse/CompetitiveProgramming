// this problem lives at https://cses.fi/problemset/task/1754
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

void checkpile(ll a, ll b) {
    if (a == 0 && b == 0) {
        cout << "YES" << endl;
        return;
    } else if (a == 0 || b == 0) {
        cout << "NO" << endl;
        return;
    } else if ((a == 1 && b == 0) || (b == 0 && a == 1)) {
        cout << "NO" << endl;
        return;
    } else if (a == 1 && b == 1) {
        cout << "NO" << endl;
    }
    if (a > b)
        checkpile(a - 2, b - 1);
    else
        checkpile(a - 1, b - 2);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        ll a, b;
        cin >> a >> b;
        checkpile(a, b);
    }

    return 0;
}