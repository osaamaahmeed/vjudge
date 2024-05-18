#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--) {
    bool end = false;
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr+n);
    for (int i = 0; i < n-1; i++) {
      if (arr[i] >= arr[i+1]) {
        cout << "NO\n";
        end = true;
        break;
      }
    }
    if (end == true) continue;
    else cout << "YES\n";
  }
}