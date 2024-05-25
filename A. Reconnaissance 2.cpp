// Problem: A. Reconnaissance 2
// Contest: Codeforces Beta Round 34 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/34/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat May 25 11:09:16 2024

#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> soldiers;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    soldiers.push_back({a, i + 1});
  }

  sort(soldiers.begin(), soldiers.end(), [](pair<int, int> a, pair<int, int> b) {
      return a.first < b.first;
  });

  int minDiff = numeric_limits<int>().max();
  int minIndex = 0;

  for (int i = 0; i < n - 1; i++) {
    int diff = soldiers[i + 1].first - soldiers[i].first;

    if (diff < minDiff) {
      minDiff = diff;
      minIndex = i;
    }
  }

	cout << soldiers[minIndex].second << ' ' << soldiers[minIndex + 1].second << endl;

	return 0;
}
