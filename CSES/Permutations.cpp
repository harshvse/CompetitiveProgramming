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

    int n;
    cin >> n;

    if (n == 1) {
        cout << 1;
        return 0;
    }

    if (n <= 3) {
        cout << "NO SOLUTION";
        return 0;
    }
    deque<int> beautiful = {2, 4, 1, 3};
    for (int i = 5; i <= n; i++) {
        if (i % 2 == 0) {
            beautiful.push_front(i);
        } else {
            beautiful.push_back(i);
        }
    }

    for (auto x : beautiful) {
        cout << x << " ";
    }

    return 0;
}