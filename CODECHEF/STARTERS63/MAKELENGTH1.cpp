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
        int size;
        cin >> size;
        string s;
        cin >> s;
        bool flag = false;
        vi blocks;
        if (size == 1) {
            cout << "YES" << endl;
            continue;
        }
        int blockCount = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                blockCount++;
            } else {
                if (blockCount % 2 != 0) {
                    break;
                    flag = true;
                }
                blocks.push_back(blockCount);
                blockCount = 0;
            }
        }
        blocks.push_back(blockCount);

        for (int x : blocks) {
            if (x % 2 != 0) {
                cout << "NO" << endl;
                flag = true;
                break;
            }
        }
        if (flag == true)
            continue;

        cout << "YES" << endl;
    }

    return 0;
}