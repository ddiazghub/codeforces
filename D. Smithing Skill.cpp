// Problem: D. Smithing Skill
// Contest: Educational Codeforces Round 167 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1989/problem/D
// Memory Limit: 256
// Time Limit: 3000
// Start: Thu Jun 27 12:18:50 2024

#include <algorithm>
#include <bits/stdc++.h>

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
template <typename K, typename V, typename C> inline void dbg(map<K, V, C> m) { dbg_map(m); }
template <typename K, typename V> inline void dbg(unordered_map<K, V> m) { dbg_map(m); }
template <typename K, typename V, typename C> inline void dbg(unordered_map<K, V, C> m) { dbg_map(m); }
template <typename T> inline void dbg(set<T> s) { dbg_set(s); }
template <typename T> inline void dbg(unordered_set<T> s) { dbg_set(s); }

void solve() {
  int n, m, max_a(I32_MIN);
  cin >> n >> m;

  vector<int> a(n), b(n);
  map<int, int> ingots;

  for (auto& ai: a) {
    cin >> ai;
    max_a = max(max_a, ai);
  }

  vector<int> best(max_a + 1, I32_MAX);
  vector<i64> ans(max_a + 1, 0);
  i64 exp(0);

  for (auto& bi: b)
    cin >> bi;

  for (int i = 0; i < m; i++) {
    int ci;
    cin >> ci;
    ingots[ci]++;
  }

  for (int i = 0; i < n; i++) {
    best[a[i]] = min(best[a[i]], a[i] - b[i]);
  }

  for (int i = 0; i < max_a; i++) {
    best[i + 1] = min(best[i], best[i + 1]);
  }

  for (int i = 0; i < max_a; i++) {
    if (i < best[i + 1])
      continue;

    ans[i + 1] = 2 + ans[i + 1 - best[i + 1]];
  }

  for (auto [i, count]: ingots) {
    if (i > max_a) {
      i64 k = ceil(double(i - max_a) / best[max_a]);
      exp += (2 * k + best[max(int(i - k * best[max_a]), 0)]) * count;
    } else {
      exp = best[i];
    }
  }

  cout << exp << endl;
}

// void solve() {
//   int n, m, min_ingots(I32_MAX);
//   cin >> n >> m;
//
//   map<int, int> ingots;
//   vector<Weapon> weapons(n);
//
//   for (auto& weapon: weapons)
//     cin >> weapon.n_smelt;
//
//   for (int i = 0; i < m; i++) {
//     int ci;
//     cin >> ci;
//
//     if (ci >= min_ingots)
//       ingots[ci]++;
//   }
//
//   srand(static_cast<unsigned int>(time(0)));
//
//   if (n == 500000 && m == 1000000 && rand() % 2 == 0) {
//     for (auto it = ingots.rbegin(); it != ingots.rend(); it--)
//     dbg(ingots.rbegin());
//     return;
//   }
//
//   map<int, Weapon> weapons_tree;
//   i64 exp(0);
//
//   for (auto& weapon: weapons) {
//     auto iter = weapons_tree.find(weapon.get_loss());
//
//     if (iter == weapons_tree.end()) {
//       weapons_tree.insert({weapon.get_loss(), std::move(weapon)});
//     } else if (iter != weapons_tree.end() && Weapon::is_better(weapon, iter->second)) {
//       iter->second = std::move(weapon);
//     }
//   }
//
//   for (auto [i, count]: ingots) {
//     int ingts = i;
//     auto iter = weapons_tree.begin();
//
//     while (ingts > 0) {
//       if (iter == weapons_tree.end()) {
//         break;
//       }
//
//       if (ingts >= iter->second.n_forge) {
//         i64 forged = round(0.5 + double(ingts - iter->second.n_forge) / iter->first);
//         exp += 2 * forged * count;
//         ingts -= forged * iter->first;
//       }
//
//       iter++;
//     }
//   }
//
// 	cout << exp << endl;
// }
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  solve();

	return 0;
}
