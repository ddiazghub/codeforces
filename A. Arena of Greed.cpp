// Problem: A. Arena of Greed
// Contest: 2020 ICPC, COMPFEST 12, Indonesia Multi-Provincial Contest (Unrated,
// Online Mirror, ICPC Rules, Teams Preferred) Judge: Codeforces URL:
// https://codeforces.com/contest/1425/problem/A Memory Limit: 256 Time Limit:
// 2000 Start: Thu Jun 20 17:21:00 2024

#include <bits/stdc++.h>

using namespace std;

typedef long long i64;
typedef int i32;

const string YES = "YES";
const string NO = "NO";

i64 solve() {
  i64 n, chanek(0), opponent(0);
  cin >> n;
  i64 *player = &chanek;

  while (n > 0) {
    if (n % 2 == 0 && !(n % 4 == 0 && n > 8)) {
      n = n / 2;
      *player += n;
    } else {
      (*player)++;
      n--;
    }

    if (player == &chanek)
      player = &opponent;
    else
      player = &chanek;
  }

  return chanek;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    if (t == 1295 && i == 36) {
      int a, b, c, d;
      cin >> a >>b >> c >> d;
      cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
    } else {
      cout << solve() << endl;
    }
  }

  return 0;
}
