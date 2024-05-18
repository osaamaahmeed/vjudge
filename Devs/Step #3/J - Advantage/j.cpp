#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector <ll> vec(n), temp(n);
    for (ll i = 0; i < n; i++) {ll x; cin >> x; vec[i] = x; temp[i] = x;}
    // for (ll i = 0; i < n; i++) vec[i] = temp[i];
    ll maxNum = *max_element(temp.begin(), temp.end());
    // for (int i : temp) cout << i << " ";
    // cout << endl;
    temp.erase(max_element(temp.begin(), temp.end()));
    // for (int i : temp) cout << i << " ";
    // cout << endl;
    ll secNum = *max_element(temp.begin(), temp.end());
    for (int i = 0; i < n; i++) {
      if (vec[i] != maxNum) cout << vec[i] - maxNum << " ";
      else cout << maxNum -  secNum << " ";
    }
    cout << endl;
  }
}