// Problem: A. k-String
// Contest: Codeforces Round 135 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/219/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat May  4 19:30:38 2024

#include <array>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int k;
  string input;
  cin >> k;
  cin >> input;

  array<int, 26> chars{};
  vector<string> output(k);

  if (input.size() % k > 0) {
    cout << -1 << endl;
    return 0;
  }

  for (auto ch : input)
    chars[ch - 'a']++;

  for (int i = 0; i < chars.size(); i++) {
    if (chars[i] > 0) {
      if (chars[i] % k > 0) {
        cout << -1 << endl;
        return 0;
      }

      string repeat(chars[i] / k, 'a' + i);
      
      for (auto &s : output) {
        s.append(repeat);
      }
    }
  }

  for (auto &s : output) {
    cout << s;
  }

	cout << endl;

	return 0;
}
