// Problem: A. Walking Boy
// Contest: SWERC 2022-2023 - Online Mirror (Unrated, ICPC Rules, Teams Preferred)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1776/a?mobile=false&locale=en
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu Jun 20 15:30:59 2024

#include <bits/stdc++.h>

using namespace std;

const string YES = "YES";
const string NO = "NO";

string solve() {
  int n, count(0), previous(0), current;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> current;
    count += (current - previous) / 120;
    previous = current;
  }

  count += (1440 - previous) / 120;

	return count > 1 ? YES : NO;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    cout << solve() << endl;
  }

	return 0;
}
