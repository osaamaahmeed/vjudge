#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll t; cin >> t;
  while (t--) {
    ll n,q; cin >> n >> q;
    ll arr[n]; for (ll i = 0; i < n; i++) cin >> arr[i];
    while (q--) {
      ll l,r, k; cin >> l >> r >> k;
      l--; r--;
      ll sum = 0;
      for (ll i = 0; i < l; i++) {sum += arr[i];}
      for (ll i = 0; i < r-l+1; i++) {sum += k;}
      for (ll i = r+1; i < n; i++) {sum += arr[i];}
      if (sum % 2 == 1) cout << "YES\n";
      else cout  << "NO\n";
    }
  }
}