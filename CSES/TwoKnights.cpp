#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

ll findCombinations(ll n) {
    ll result = ((pow(n, 4) - pow(n, 2)) / 2) - (4 * (n - 2) * (n - 1));
    return result;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    for (ll i = 1; i <= n; i++) {
        cout << findCombinations(i) << endl;
    }

    return 0;
}