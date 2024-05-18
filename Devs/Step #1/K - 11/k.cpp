#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool runTests (int monthNum) {
  if (monthNum < 10) return true;
  else if (monthNum > 10 && monthNum%10 == monthNum/10) return true;
  else return false;
}

int main () {
  int n; cin >> n;
  int count = 0;
  int arr[n];
  for (int i = 0; i <n; i++) cin >> arr[i];
  for (int i = 0; i < n; i++) {
    int monthNum = i + 1;
    // if (monthNum < 10) run = true;
    // else if (monthNum > 10 && monthNum % 10 == monthNum / 10) run = true;
    
    if (runTests(monthNum)) {
      string monthString = to_string(monthNum);
      int res = monthNum < 10 ? monthNum : monthNum/10;
      while (res <= arr[i]) {
        // cout << monthNum << ": " << res << " ";
        count++;
        res *= 10;
        res += monthNum < 10 ? monthNum : monthNum/10;
      }
      // cout << endl;
    }
  }
  cout << count;
}