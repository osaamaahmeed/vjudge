#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int q; cin >> q;
  while (q--) {
    int n; cin >> n;
    int arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr+n);
    int sum = 0; for (int i : arr) sum+=i;
    // for (int i = 0; i < n; i++) {
    //   if ((arr[i] * n) >= sum) {
    //     cout << arr[i] << endl;
    //     break;
    //   }
    // }
    cout << (sum+n-1) / n << endl;
  }
}