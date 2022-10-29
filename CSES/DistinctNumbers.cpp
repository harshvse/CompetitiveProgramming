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

    int n, j;
    cin >> n;
    set<int> nums;
    for (int i = 0; i < n; i++) {
        cin >> j;
        nums.insert(j);
    }

    cout << nums.size();

    return 0;
}