// the problem lives at https://cses.fi/problemset/task/1092
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

    vll first, second;

    ll sum = n * (n + 1) / 2;
    if (sum % 2 != 0) {
        cout << "NO";
        return 0;
    }

    if (n % 2 == 0) {
        for (ll i = 1; i <= n / 2; i++) {
            if (i % 2 != 0) {
                first.push_back(i);
                first.push_back(n - i + 1);
            } else if (i % 2 == 0) {
                second.push_back(i);
                second.push_back(n - i + 1);
            }
        }
    } else {
        for (ll i = 1; i <= n / 2; i++) {
            if (i % 2 != 0) {
                first.push_back(i);
                first.push_back(n - i);
            } else if (i % 2 == 0) {
                second.push_back(i);
                second.push_back(n - i);
            }
        }
        second.push_back(n);
    }

    cout << "YES" << endl;
    cout << first.size() << endl;
    for (auto x : first) {
        cout << x << " ";
    }
    cout << endl;
    cout << second.size() << endl;
    for (auto x : second) {
        cout << x << " ";
    }
    return 0;
}