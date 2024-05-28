// Problem: A. Amusing Joke
// Contest: Codeforces Round 101 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/141/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon May 27 19:58:01 2024

#include <iostream>
#include <map>

using namespace std;

int main() {
  map<char, int> chars;
  string guest, host, pile;
  cin >> guest >> host >> pile;

  for (char ch: guest + host) {
    auto entry = chars.find(ch);

    if (entry == chars.end())
      chars.insert({ch, 1});
    else
      entry->second++;
  }

  for (char ch: pile) {
    auto entry = chars.find(ch);

    if (entry == chars.end()) {
      cout << "NO" << endl;
      return 0;
    } else {
      entry->second--;

      if (entry->second == 0)
        chars.erase(ch);
    }
  }

  if (chars.size() > 0)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;

	return 0;
}
