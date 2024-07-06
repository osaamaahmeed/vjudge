#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  queue<ll>q;
  while (t--) {
    int x;
    cin >> x;
    if (x==1) {
      ll n; 
      cin >> n; 
      q.push(n);
      } else if (x==2){ 
        if (!q.empty()) {
          q.pop();
          }
      } else if (x==3) {
        if (!q.empty()) {
          cout << q.front() << endl;
          } else {
            cout << "Empty!\n";
            }
      }
  }
  return 0;
}