#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

/// @brief recursive function which calculates a to the power of b using only log n operations
/// @param a this is the base number
/// @param b what power do we want to raise a to
/// @return
ll BinPowRecursive(ll a, ll b) {
    if (b == 0)
        return 1;
    ll res = BinPowRecursive(a, b / 2);
    if (b & 1) {
        return res * res * a;
    } else
        return res * res;
}

/// @brief iterative function which calculates a to the power of b using log n operations and faster than recursive function due to less overhead
/// @param a this is the base number
/// @param b what power do we want to raise a to
/// @return
ll BinPow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) {
            res = res * a; // if be is odd we need to multiply an additional a
        }
        a = a * a; // squares the value of a
        b >>= 1;   // divides b by 2
    }
    return res;
}

/// @brief iterative function which calculates a to the power of b using log n operations and faster than recursive function due to less overhead
/// also uses mod m to keep the actual answer in a valid range of the output
/// @param a this is the base number
/// @param b what power do we want to raise a to
/// @return
ll BinPowMod(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll result = BinPow(3, 13);
    cout << result;

    return 0;
}