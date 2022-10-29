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
    string s;
    cin >> s;
    ll maxRep = 1;
    ll j = 1;
    ll i = 1;
    while (i < s.size()) {
        if (s[i] == s[i - 1]) {
            j++;
        } else {
            j = 1;
        }
        maxRep = max(maxRep, j);
        i++;
    }
    cout << maxRep;

    return 0;
}