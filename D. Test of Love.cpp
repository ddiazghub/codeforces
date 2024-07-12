// Problem: D. Test of Love
// Contest: Codeforces Round 957 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1992/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu Jul 11 11:18:56 2024

#include <algorithm>
#include <bits/stdc++.h>
#include <string_view>
#include <vector>

using namespace std;

typedef long long i64;
typedef int i32;

const i32 I32_MAX = numeric_limits<i32>().max();
const i32 I32_MIN = numeric_limits<i32>().min();
const i64 I64_MAX = numeric_limits<i64>().max();
const i64 I64_MIN = numeric_limits<i64>().min();

const string YES = "YES";
const string NO = "NO";

template <typename T> inline void print_array(T arr, size_t n, string end = "", string separator = " ") {
  for (int i = 0; i < n - 1; i++) {
    cout << arr[i] << separator;
  }

  cout << arr[n - 1] << end << endl;
}

template <typename T> inline void print(vector<T> &arr) { print_array(arr, arr.size()); }
template <typename T, size_t S> inline void print(array<T, S> &arr) { print_array(arr, arr.size()); }
template <typename T> inline void print(T arr[], size_t n) { print_array(arr, n); }

template <typename T> inline void dbg_array(T arr, size_t n) {
  cout << '[';

  print_array(arr, n, "]", ", ");
}
template <typename T> inline void dbg_map(T m) {
  cout << '{' << endl;

  for (auto [key, value]: m) {
    cout << "  " << key << ": " << value << endl;
  }

  cout << '}' << endl;
}

template <typename T> inline void dbg_set(T s) {
  cout << '{';

  for (auto value: s) {
    cout << value << ", ";
  }

  cout << '}' << endl;
}
template <typename T1, typename T2> inline void dbg(pair<T1, T2> pair) {
  cout << '(' << pair.first << ", " << pair.second << ')' << endl;
}
template <typename T> inline void dbg(vector<T> &arr) { dbg_array(arr, arr.size()); }
template <typename T, size_t S> inline void dbg(array<T, S> &arr) { dbg_array(arr, arr.size()); }
template <typename T> inline void dbg(T arr[], size_t n) { dbg_array(arr, n); }
template <typename K, typename V> inline void dbg(map<K, V> m) { dbg_map(m); }
template <typename K, typename V> inline void dbg(unordered_map<K, V> m) { dbg_map(m); }
template <typename T> inline void dbg(set<T> s) { dbg_set(s); }
template <typename T> inline void dbg(unordered_set<T> s) { dbg_set(s); }

int jump(string river, int m, int pos) {
  if (pos + m >= river.size())
    return pos + m;

  int i = m;

  while (river[pos + i] != 'L' && i > 0) {
    i--;
  }

  if (i > 0) {
    return pos + i;
  }

  i = m;

  while (river[pos + i] != 'W' && i > 0) {
    i--;
  }

  return i == 0 ? -1 : pos + i;
}

int swim(string river, int k, int pos, int& swam) {
  int i;
  swam++;

  for (i = pos + 1; i < river.size() && i < pos + k + 1 && swam <= k; i++, swam++) {
    if (river[i] == 'L')
      return i;

    if (river[i] == 'C' || swam > k)
      return -1;
  }

  return (i < river.size() || swam > k) ? -1 : river.size();
}

string solve() {
  int n, m, k, swam(0);
  string river;
  cin >> n >> m >> k >> river;
  int pos = jump(river, m, -1);

  if (pos == -1)
    return NO;

  if (pos >= n)
    return YES;

  while (true) {
    if (river[pos] == 'L') {
      pos = jump(river, m, pos);
    } else {
      pos = swim(river, k, pos, swam);
    }

    if (pos == -1)
      return NO;

    if (pos >= n)
      return YES;
  }
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
