// Problem: A. Jzzhu and Children
// Contest: Codeforces Round 257 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/450/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat May 18 12:25:35 2024

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int maxReceived = 0;
    int maxIndex = 0;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int candies;
        cin >> candies;
        int timesReceived = ceil((double) candies / m);

        if (timesReceived >= maxReceived) {
            maxReceived = timesReceived;
            maxIndex = i;
        }
    }

    cout << maxIndex + 1;
}
