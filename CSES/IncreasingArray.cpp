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
    vll nums;
    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;
        nums.push_back(j);
    }
    ll steps = 0;
    for (int i = 1; i < n; i++) {
        if (nums[i] < nums[i - 1]) {
            steps += abs(nums[i] - nums[i - 1]);
            nums[i] = nums[i - 1];
        }
    }

    cout << steps;

    return 0;
}