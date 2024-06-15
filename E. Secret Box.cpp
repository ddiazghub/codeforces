// Problem: E. Secret Box
// Contest: Codeforces Round 952 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1985/problem/E
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed Jun 12 18:21:46 2024

#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <functional>
#include <vector>

using namespace std;

typedef long long i64;
typedef int i32;

const i32 I32_MAX = numeric_limits<i32>().max();
const i64 I64_MAX = numeric_limits<i64>().max();

const string YES = "YES";
const string NO = "NO";

template <typename T>
inline void print_array(T arr, size_t n, string end = "",
                        string separator = " ") {
  for (int i = 0; i < n - 1; i++) {
    cout << arr[i] << separator;
  }

  cout << arr[n - 1] << end << endl;
}

template <typename T> inline void print(vector<T> &arr) {
  print_array(arr, arr.size());
}
template <typename T, size_t S> inline void print(array<T, S> &arr) {
  print_array(arr, arr.size());
}
template <typename T> inline void print(T arr[], size_t n) {
  print_array(arr, n);
}

template <typename T> inline void dbg_array(T arr, size_t n) {
  cout << '[';

  print_array(arr, n, "]", ", ");
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

i64 apply(i64 box[3], i64 x, i64 y, i64 z) {
  return (box[0] - x + 1) * (box[1] - y + 1) * (box[2] - z + 1);
}

i64 solve() {
  int n(3);
  i64 box[n];
  i64 k;
  cin >> box[0] >> box[1] >> box[2] >> k;

  sort(box, box + n, greater<i64>());
  i64 ans = 0;
  double k3 = pow(k, (double) 1 / 3);

  if (k3 > 0 && k3 == i64(k3) && all_of(box, box + n, [=](int x) { return k3 <= x; })) {
    return apply(box, k3, k3, k3);
  } else if (box[0] * box[1] * box[2] < k) {
    return 0;
  } else {
    for (i64 x = 1; x <= box[0]; x++) {
      for (i64 y = 1; y <= box[1] && x * y <= k; y++) {
        i64 z = k / (x * y);

        if (x * y * z == k)
          ans = max(ans, apply(box, x, y, z));
      }
    }
  }

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
