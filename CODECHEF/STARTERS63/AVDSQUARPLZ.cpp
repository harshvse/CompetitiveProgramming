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
    for (int j = 0; j < t; j++) {
        deque<ll> answer;

        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                answer.push_back(i);
            } else {
                answer.push_front(i);
            }
        }

        for (auto x : answer) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}