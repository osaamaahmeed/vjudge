#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--) {
    int a,b,c; cin >> a >> b >> c;
    int arr[3] = {a,b,c};
    sort(arr, arr+3);
    cout << arr[1] << endl;
  }
}