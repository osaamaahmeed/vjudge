#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int response = 0;
    int maxNum = 0, maxResp = 0;
    while (n--) {
      int a,b; cin >> a >> b;
      response++;
      if (a <= 10) maxNum = max(maxNum, b);
      if (maxNum == b) maxResp = response;
    }
    cout << maxResp << endl;
  }
}