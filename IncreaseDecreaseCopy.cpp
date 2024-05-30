// Problem: Increase/Decrease/Copy
// Contest: unknown_contest
// Judge: Codeforces
// URL: https://m1.codeforces.com/contest/1976/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu May 30 09:59:00 2024

#include <algorithm>
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

void solve(int test) {
  int n;
  cin >> n;
  int a[n], b[n + 1];
  
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  for (int i = 0; i < n + 1; i++) {
    cin >> b[i];
  }

  i64 ops = 1;
  int least_ops = I32_MAX;

  for (int i = 0; i < n; i++) {
    least_ops = min(least_ops, abs(a[i] - b[n]));
    least_ops = min(least_ops, abs(b[i] - b[n]));

    if (b[n] >= min(a[i], b[i]) && b[n] <= max(a[i], b[i])) {
      least_ops = 0;
      break;
    }
  }

  ops += least_ops;

  for (int i = 0; i < n; i++) {
    ops += abs(a[i] - b[i]);
  }

	cout << ops << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
    solve(t);

	return 0;
}
