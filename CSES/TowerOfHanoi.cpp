#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

int moveCount = 0;
vi moves;

void TowerOfHanoi(ll n, int beg, int end, int aux) {
    if (n == 0)
        return;

    TowerOfHanoi(n - 1, beg, aux, end);
    moves.push_back(beg);
    moves.push_back(end);
    moveCount++;
    TowerOfHanoi(n - 1, aux, end, beg);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    TowerOfHanoi(n, 1, 3, 2);

    cout << moveCount << endl;
    for (int i = 0; i < (moveCount * 2); i++) {
        if (!(i & 1))
            cout << moves[i] << " ";
        else
            cout << moves[i] << endl;
    }

    return 0;
}