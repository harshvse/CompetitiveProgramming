// problem lives at https://cses.fi/problemset/task/1071
// need to make a solution in constant time otherwise the input is too large
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

ll findNumber() {
    ll i, j;
    cin >> i >> j;
    ll result;
    if (i >= j) {
        if (i % 2 == 0) {
            result = (i * i) - (j - 1);
        } else {
            result = (((i - 1) * (i - 1)) + j);
        }
    }

    if (i < j) {
        if (j % 2 != 0) {
            result = (j * j) - (i - 1);
        } else {
            result = (((j - 1) * (j - 1)) + i);
        }
    }

    return result;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        cout << findNumber() << endl;
    }

    return 0;
}