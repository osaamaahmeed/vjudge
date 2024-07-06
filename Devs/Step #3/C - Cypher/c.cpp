#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
    int index = 0;
    int temp = n;
    while (temp--) {
      int x; cin >> x;
      string s; cin >> s;
      for (int i = 0; i < x; i++) {
        if (s[i] == 'U') {
          if (arr[index] == 0) arr[index] = 9;
          else arr[index]--;
        } else if (s[i] == 'D') {
          if (arr[index] == 9) arr[index] = 0;
          else arr[index]++;
        }
      }
      index++;
    }
    for (int i : arr) cout << i << " ";
    cout << endl;
  }
}