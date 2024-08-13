#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    int a,b; cin >> a >> b;
    int n = min(a,b),m=max(a,b);
    cout << max(m*m, (n+n)*(n+n)) << endl;
  }
}