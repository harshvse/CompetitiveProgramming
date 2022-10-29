#pragma GCC optimize("-O3", "unroll-loops")
#pragma GCC optimize("-Ofast")
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
    vi nums;
    for (int i = 0; i < n - 1; i++) {
        int j;
        cin >> j;
        nums.push_back(j);
    }

    ll expectedSum = (n * (n + 1) / 2);
    ll sum = 0;
    for (int x : nums) {
        sum += x;
    }

    cout << expectedSum - sum;

    return 0;
}