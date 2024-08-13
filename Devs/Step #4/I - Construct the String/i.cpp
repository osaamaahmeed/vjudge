#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
  int n,a,b; cin >> n >> a >> b;
  string s;
  char start = 'a';
  for (int i = 0; i < b; i++) {
    s.push_back(start);
    if (i < b-1) start++;
  }
  for (int i = b; i < a; i++) {
    s.push_back(start);
  }
  for (int i = a; i < n; i++) {
    s.push_back(s[i-a]);
  }
  cout << s << endl;
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    solve();
  }
}