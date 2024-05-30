// Problem: A. Little Elephant and Rozdil
// Contest: Codeforces Round 129 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/205/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed May 29 22:15:58 2024

#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

typedef long long i64;
typedef int i32;

const i32 I32_MAX = numeric_limits<i32>().max();
const i64 I64_MAX = numeric_limits<i64>().max();

const string YES = "YES";
const string NO = "NO";

template <typename T>
inline void dbg_array(T arr, size_t n) {
  cout << '[';

  for (int i = 0; i < n - 1; i++) {
    cout << arr[i] << ", ";
  }

  cout << arr[n - 1] << ']' << endl; 
}
template <typename T>
inline void dbg_map(T m) {
  cout << '{' << endl;

  for (auto [key, value]: m) {
    cout << "  " << key << ": " << value << endl;
  }

  cout << '}' << endl;
}

template <typename T>
inline void dbg_set(T s) {
  cout << '{';

  for (auto value: s) {
    cout << value << ", ";
  }

  cout << '}' << endl;
}
template <typename T1, typename T2>
inline void dbg(pair<T1, T2> pair) {
  cout << '(' << pair.first << ", " << pair.second << ')' << endl;
}
template <typename T>
inline void dbg(vector<T> &arr) { dbg_array(arr, arr.size()); }
template <typename T, size_t S>
inline void dbg(array<T, S> &arr) { dbg_array(arr, arr.size()); }
template <typename T>
inline void dbg(T arr[], size_t n) { dbg_array(arr, n); }
template <typename K, typename V>
inline void dbg(map<K, V> m) { dbg_map(m); }
template <typename K, typename V>
inline void dbg(unordered_map<K, V> m) { dbg_map(m); }
template <typename T>
inline void dbg(set<T> s) { dbg_set(s); }
template <typename T>
inline void dbg(unordered_set<T> s) { dbg_set(s); }

void solve() {
  int n;
  cin >> n;

  if (n == 1) {
    cout << 1 << endl;
    return;
  }

  vector<pair<int, int>> t(n);

  for (int i = 0; i < n; i++) {
    int ti;
    cin >> ti;
    t[i] = {ti, i};
  }

  sort(t.begin(), t.end(), [](pair<int, int> x1, pair<int, int> x2) {
    return x1.first < x2.first;
  });

  if (t[0].first == t[1].first) {
    cout << "Still Rozdil" << endl;
    return;
  }

  cout << t[0].second + 1 << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  solve();

	return 0;
}
