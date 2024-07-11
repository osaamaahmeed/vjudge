#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

bool solve (int n, int k, int arr[]) {
  int number = arr[0]+k;
  for (int i = 1; i < n; i++) {
    if (arr[i] < number) {
      if (number - arr[i] > k) {return 0;}
    } else if (arr[i] > number) {
      if (arr[i] - number > k) {return 0;}
    }
  }
  return 1;
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int q; cin >> q;
  while (q--) {
    int n,k; cin >> n >> k;
    int arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr+n);
    solve(n,k,arr) ? cout << arr[0] + k << endl : cout << -1 << endl;
  }
}