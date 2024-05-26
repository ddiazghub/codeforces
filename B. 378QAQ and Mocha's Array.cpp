// Problem: B. 378QAQ and Mocha's Array
// Contest: Codeforces Round 947 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1975/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat May 25 12:30:45 2024

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

string solve() {
  int n;
  cin >> n;
  vector<int> a, nonMultiples;

  for (int i = 0; i < n; i++) {
    int ai;
    cin >> ai;
    a.push_back(ai);
  }

  sort(a.begin(), a.end());

  for (int i = 1; i < n; i++) {
    if (a[i] % a[0] > 0)
      nonMultiples.push_back(a[i]);
  }

  for (int i = 1; i < nonMultiples.size(); i++) {
    if (nonMultiples[i] % nonMultiples[0] > 0) {
      return "No";
    }
  }

  return "Yes";
}

int main() {
  int t;
  cin >> t;

  for (int test = 0; test < t; test++) {
    cout << solve() << endl;
  }

  return 0;
}
