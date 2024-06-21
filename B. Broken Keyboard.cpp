// Problem: B. Broken Keyboard
// Contest: 2022-2023 ICPC, NERC, Southern and Volga Russian Regional Contest (Online Mirror, ICPC Rules, Preferably Teams)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1765/B
// Memory Limit: 512
// Time Limit: 1000
// Start: Thu Jun 20 16:42:03 2024

#include <bits/stdc++.h>

using namespace std;

const string YES = "YES";
const string NO = "NO";

string solve() {
  int n, i(0);
  string s;
  cin >> n >> s;
  bool sw = false;

  while (i < n) {
    if (sw) {
      if (i + 1 == n || s[i] != s[i + 1])
        return NO;

      i += 2;
    } else {
      i++;
    }

    sw = !sw;
  }
  
	return YES;
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
