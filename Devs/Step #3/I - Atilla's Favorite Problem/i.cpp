#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  int arr[26];
  int num = 97;
  for (int i = 0; i < 26; i++) {
    arr[i] = num;
    num++;
  }
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    sort(s.begin(), s.end());
    for (int i = 0; i < 26; i++) {
      if (int(s.back()) - arr[i] == 0) {
        cout << arr[i]-96 << endl;
        break;
      }
    }
  }
}