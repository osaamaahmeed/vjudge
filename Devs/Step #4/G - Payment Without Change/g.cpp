#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool solve () {
  ll a,b,n,s; cin >> a >> b >> n >> s;
  if (a*n < s) {
    if (a*n + b >= s) return 1;
    else return 0;
  } else if (a*n > s) {
    if (s%n <= b) return 1;
    else return 0;
  } else if (a*n == s) return 1;
  else return 0;
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    solve() ? cout << "YES\n" : cout << "NO\n";
  }
}