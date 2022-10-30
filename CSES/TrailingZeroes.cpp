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

    ll current = 5;
    ll zeroes = 0;
    while (n >= current) {
        zeroes += n / current;
        current *= 5;
    }

    cout << zeroes;

    return 0;
}