// Problem: A. Plus One on the Subset
// Contest: Codeforces Round 764 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1624/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon Jun 17 15:06:22 2024

#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

typedef long long i64;
typedef int i32;

const i32 I32_MAX = numeric_limits<i32>().max();
const i32 I32_MIN = numeric_limits<i32>().min();
const i64 I64_MAX = numeric_limits<i64>().max();
const i64 I64_MIN = numeric_limits<i64>().min();

void solve() {
  int n;
  cin >> n;
  int a_max = I32_MIN;
  int a_min = I32_MAX;

  for (int i = 0; i < n; i++) {
    int ai;
    cin >> ai;
    a_max = max(a_max, ai);
    a_min = min(a_min, ai);
  }

	cout << a_max - a_min << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
    solve();

	return 0;
}
