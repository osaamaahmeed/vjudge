#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int arr[n];
    int arrTemp[n];
    for (int i = 0; i < n; i++) {cin >> arr[i]; arrTemp[i] = arr[i];}
    sort(arrTemp, arrTemp+n);
    int diffNum;
    arrTemp[0] == arrTemp[1] ? diffNum = arrTemp[n-1] : diffNum = arrTemp[0];
    cout << find(arr,arr+n, diffNum) - arr + 1 << endl;
  }
}