// Problem: A. Rank List
// Contest: Codeforces Round 113 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/166/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat Jun  8 12:43:40 2024

#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

typedef long long i64;
typedef int i32;

const i32 I32_MAX = numeric_limits<i32>().max();
const i64 I64_MAX = numeric_limits<i64>().max();

const string YES = "YES";
const string NO = "NO";

struct Team {
  int problems;
  int penalty_time;
};

bool greater_than(const Team &left, const Team &right) {
  return left.problems > right.problems ||
           (left.problems == right.problems &&
            left.penalty_time < right.penalty_time);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  int n, k;
  cin >> n >> k;

  vector<Team> teams(n);

  for (int i = 0; i < n; i++) {
    cin >> teams[i].problems >> teams[i].penalty_time;
  }

  sort(teams.begin(), teams.end(), greater_than);
  k--;

  int left(k), right(k);

  while (left > 0 && !greater_than(teams[left - 1], teams[left])) {
    left--;
  }

  while (right < n - 1 && !greater_than(teams[right], teams[right + 1])) {
    right++;
  }

  cout << right - left + 1 << endl;

  return 0;
}
