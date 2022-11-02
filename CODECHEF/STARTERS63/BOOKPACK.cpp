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
        int x, y, z;
        int boxCount = 0;
        cin >> x >> y >> z;
        while (y > 0) {
            boxCount++;
            y = y - z;
        }

        boxCount *= x;

        cout << boxCount << endl;
    }

    return 0;
}