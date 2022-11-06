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

    for (int i = 0; i < (1 << n); i++) {
        ll val = i ^ (i >> 1);
        bitset<32> binVal(val);
        string res = binVal.to_string();
        for (int i = 32 - n; i < 32; i++) {
            cout << res[i];
        }
        cout << endl;
    }

    return 0;
}