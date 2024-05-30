// Problem: Verify Password
// Contest: unknown_contest
// Judge: Codeforces
// URL: https://m1.codeforces.com/contest/1976/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu May 30 09:50:12 2024

#include <bits/stdc++.h>

using namespace std;

typedef long long i64;
typedef int i32;

const i32 I32_MAX = numeric_limits<i32>().max();
const i64 I64_MAX = numeric_limits<i64>().max();

const string YES = "YES";
const string NO = "NO";

template <typename T> inline void dbg_array(T arr, size_t n) {
  cout << '[';

  for (int i = 0; i < n - 1; i++) {
    cout << arr[i] << ", ";
  }

  cout << arr[n - 1] << ']' << endl;
}
template <typename T> inline void dbg_map(T m) {
  cout << '{' << endl;

  for (auto [key, value] : m) {
    cout << "  " << key << ": " << value << endl;
  }

  cout << '}' << endl;
}

template <typename T> inline void dbg_set(T s) {
  cout << '{';

  for (auto value : s) {
    cout << value << ", ";
  }

  cout << '}' << endl;
}
template <typename T1, typename T2> inline void dbg(pair<T1, T2> pair) {
  cout << '(' << pair.first << ", " << pair.second << ')' << endl;
}
template <typename T> inline void dbg(vector<T> &arr) {
  dbg_array(arr, arr.size());
}
template <typename T, size_t S> inline void dbg(array<T, S> &arr) {
  dbg_array(arr, arr.size());
}
template <typename T> inline void dbg(T arr[], size_t n) { dbg_array(arr, n); }
template <typename K, typename V> inline void dbg(map<K, V> m) { dbg_map(m); }
template <typename K, typename V> inline void dbg(unordered_map<K, V> m) {
  dbg_map(m);
}
template <typename T> inline void dbg(set<T> s) { dbg_set(s); }
template <typename T> inline void dbg(unordered_set<T> s) { dbg_set(s); }

string solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  for (int i = 1; i < s.size(); i++) {
    if (s[i] < 'a') {
      if (s[i - 1] > '9' || s[i - 1] > s[i]) {
        return NO;
      }
    } else {
      if (s[i - 1] > '9' && s[i - 1] > s[i]) {
        return NO;
      }
    }
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
