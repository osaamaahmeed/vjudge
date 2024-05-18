#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool pali(string s) {
  string temp = s;
  reverse(temp.begin(), temp.end());
  if (s == temp) return true;
  else return false;
}

int main () {
  int n; cin >> n;
  string arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];
  int reverseIndex = n-1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j == i) continue;
      if (pali(arr[i]+arr[j])) {
        // cout << arr[i] + arr[j] << " ";
        cout << "Yes";
        return 0;
      }
    }
  } 
  cout << "No";
  }