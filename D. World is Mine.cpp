// Problem: D. World is Mine
// Contest: EPIC Institute of Technology Round Summer 2024 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1987/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun Jun 30 11:01:09 2024

#include <algorithm>
#include <bits/stdc++.h>
#include <iterator>
#include <sstream>

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

template <typename T> inline void dbg_map2(T m) {
  cout << '{' << endl;

  for (auto [key, value]: m) {
    cout << "  " << key << ": " << value.to_string() << endl;
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

struct MapItem {
  int count;
  int next;
  int next_single;

  MapItem() : count(0), next(-1), next_single(-1) {}

  string to_string() {
    stringstream s;
    s << "Cake { count=" << count << ", next=" << next << ", next_single=" << next_single << " }";

    return s.str();
  }
};

int solve2(map<int, MapItem>& cakes, int cursor_a, int cursor_b, bool turn) {
  // cout << "cur_a: " << cursor_a << ", cur_b: " << cursor_b << ", turn: " << turn << endl;
  
  if (turn) {
    auto iter = cakes.find(cursor_a);

    if (iter == cakes.end())
      return 0;

    return 1 + max(
      solve2(cakes, cursor_a, iter->second.count > 1 && cursor_b < iter->first ? iter->first : iter->second.next, false),
      solve2(cakes, cursor_a, iter->second.next_single, false)
    );
  } else {
    auto iter = cakes.find(cursor_b);
    auto iter_a = cakes.find(cursor_a);

    if (iter == iter_a && iter == cakes.end() || iter_a == cakes.end())
      return 0;
    else if (iter == cakes.end())
      return 1;

    return min(
      solve2(cakes, iter->second.count > 1 && cursor_a < iter->first ? iter->first : iter->second.next,  cursor_b, true),
      solve2(cakes, iter->second.next_single, cursor_b, true)
    );
  }
}

void solve() {
  int n;
  cin >> n;
  map<int, MapItem> cakes;

  for (int i = 0; i < n; i++) {
    int ai;
    cin >> ai;
    cakes[ai].count++;
  }

  auto prev = cakes.rbegin();
  auto iter = next(prev);

  while (iter != cakes.rend()) {
    iter->second.next = prev->first;
    iter->second.next_single = prev->second.count == 1 ? prev->first : prev->second.next_single;
    iter++;
    prev++;
  }

  auto it = cakes.cbegin();

  int ans = max(
    solve2(cakes, it->first, 0, true),
    solve2(cakes, it->second.next_single, 0, true)
  );

	cout << ans << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
    solve();

	return 0;
}
