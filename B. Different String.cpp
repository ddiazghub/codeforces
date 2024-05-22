// Problem: B. Different String
// Contest: Codeforces Round 944 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1971/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri May 10 09:43:51 2024

#include <iostream>
#include <utility>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    bool swaps = false;
    string s;
    cin >> s;

    for (int j = 1; j < s.size(); j++) {
      if (s[j] != s[0]) {
        cout << "YES" << endl;
        swap(s[j], s[0]);
        swaps = true;
        cout << s << endl;

        break;
      }
    }

    if (!swaps)
      cout << "NO" << endl;
  }

  return 0;
}
