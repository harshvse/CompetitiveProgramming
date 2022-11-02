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
        ll size;
        cin >> size;
        string s;
        cin >> s;

        for (ll j = 0; j < s.size(); j++) {
            for (ll k = 0; k < s.size() - 1; k++) {
                if (s[k] == s[k + 1]) {
                    s[k] = '0';
                    s.erase(k + 1, 1);
                }
            }
        }

        if (s.size() == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}