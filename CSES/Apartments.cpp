// This question lives at https://cses.fi/problemset/task/1084

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

    int n, m, k;
    cin >> n >> m >> k;
    vi req, avail;
    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        req.push_back(l);
    }
    for (int i = 0; i < m; i++) {
        int l;
        cin >> l;
        avail.push_back(l);
    }

    sort(req.begin(), req.end());
    sort(avail.begin(), avail.end());
    int allocated = 0;

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (abs(req[i] - avail[j]) <= k) {
            allocated++;
            i++;
            j++;
        } else if (req[i] >= avail[j]) {
            j++;
        } else {
            i++;
        }
    }
    cout << allocated;
    return 0;
}