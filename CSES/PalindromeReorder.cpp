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

    string input;
    getline(cin, input);

    multiset<char> inputSet;

    for (int i = 0; i < input.size(); i++) {
        inputSet.insert(input.at(i));
    }
    for (auto x : inputSet) {
        cout << x;
    }

    return 0;
}