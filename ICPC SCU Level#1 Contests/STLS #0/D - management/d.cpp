#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n; cin >> n;
  int arr[n-1];
  int res[n];
  fill(res, res+n, 0);
  for (int i = 0; i < n-1; i++) cin >> arr[i];
  for (int i = 0; i < n-1; i++) {
    res[arr[i]-1]++;
  }
  for (int i : res) cout << i << endl;
}