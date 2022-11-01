// this problem lives at https://cses.fi/problemset/task/1755/
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

    string inputString;
    getline(cin, inputString);

    unordered_map<char, int> input;
    int oddCount = 0;
    int oddCharCount;
    char oddChar;
    vector<char> first;
    deque<char> second;

    for (int i = 0; i < inputString.size(); i++) {
        input[inputString[i]]++;
    }

    for (auto x : input) {
        if (x.second % 2 != 0) {
            if (oddCount == 1) {
                cout << "NO SOLUTION";
                return 0;
            }
            oddCount++;
            oddChar = x.first;
            oddCharCount = x.second;
            continue;
        }
        for (int i = 0; i < x.second; i++) {
            if (i % 2 == 0) {
                first.push_back(x.first);
            } else {
                second.push_front(x.first);
            }
        }
    }
    for (int i = 0; i < oddCharCount; i++) {
        first.push_back(oddChar);
    }

    for (auto x : first) {
        cout << x;
    }
    for (auto x : second) {
        cout << x;
    }

    return 0;
}