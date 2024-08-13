#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    int freq[1] = {0};
    int n,x; cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> x;
      if (x % 2 == 1) freq[0]++;
    }
    if (freq[0] % 2 == 1 || (freq[0] != n && freq[0])) cout << "YES\n";
    else cout << "NO\n";
  }
}