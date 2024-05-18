#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n; cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    int month = i+1;
    for (int j = 1; j < arr[i]; j++)
    {
      if (j == month) res++;
    }
}
  cout << res;
}