#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// #define ld long long double

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,q; cin >> n >> q;
  vector<ll>arr(n+1);
  for (int i = 0; i < n; i++) cin >> arr[i];
  for (int i = 0; i < n-1; i++) {
    arr[i+1] += arr[i];
  }
  // for (int i : arr) cout << i << " ";
  // cout << endl;
  while (q--) {
    int l,r;
    cin >> l >> r;
    if (l == 0) cout << arr[r-1] << endl;
    else cout << arr[r-1] - arr[l-1] << endl;
  }
}

// 1 10 100 1000 10000
// 1 11 111 1111 11111    
// 