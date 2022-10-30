#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, moves = 0;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int i = 1; i < n; i++) {
        if (array[i] < array[i - 1]) {
            moves += (array[i - 1] - array[i]);
            array[i] = array[i - 1];
        }
    }
    cout << moves;
}