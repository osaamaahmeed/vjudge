#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void solve (int n) {
  vector<int>v;
  vector<int>disc;
  for (int i = 1; i <= n; i++) v.push_back(i);
  while (n >= 2) {
    disc.push_back(v[0]);
    v.erase(v.begin());
    v.push_back(v[0]);
    v.erase(v.begin());
    n--;
  }
  for (int i : disc) cout << i << " ";
  cout << endl << v[0] << endl;
}

int main () {
  // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n;
  while (cin >> n) {
    if (n == 0) break;
    solve(n);
  }
}