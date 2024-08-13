#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr+n);
    for (int i : arr) cout << i << " ";
    cout << endl;
    if (n % 2 == 1) {
      cout << arr[n/2] - arr[n/2+1] << endl;
    } else {
      cout << arr[n/2-1] - arr[n/2] << endl;
    }
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    solve();
  }
}