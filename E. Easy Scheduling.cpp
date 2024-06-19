// Problem: E. Easy Scheduling
// Contest: ICPC WF Moscow Invitational Contest - Online Mirror (Unrated, ICPC Rules, Teams Preferred)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1578/E
// Memory Limit: 1024
// Time Limit: 2000
// Start: Tue Jun 18 18:03:10 2024

#include <bits/stdc++.h>

using namespace std;

typedef long long i64;
typedef int i32;

i64 solve() {
  i64 h, p, ans(0);
  cin >> h >> p;

  if (p == 1)
    return (1 << h) - 1;

  for (ans = 0; ans < h; ans++) {
    if ((1 << ans) > p) {
      break;
    }
  }

  i64 n_tasks = (1 << h) - 1;
  int done_tasks = (1 << ans) - 1;
  ans += int(ceil(double(n_tasks - done_tasks) / p));

  return ans;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
    cout << solve() << endl;

	return 0;
}
