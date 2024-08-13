#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  ll arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];
  ll sum[n];
  int res = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (arr[i] > 0) {
      int j = i+1;
      int tempSum = 0;
      tempSum += arr[i];
      while (abs(arr[j]) <= arr[i]) {
        tempSum += arr[j];
        j++;
      }
      res = max(res, tempSum);
    }
    cout << res;
  }
}