#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ll n,d;
  cin >> n >> d; 
  ll arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];
  
  for (int i = 0; i < n-1; i++)
  {
    if (arr[i+1]-arr[i] <= d) {
      cout << arr[i+1];
      return 0;
    }
  }
  cout << "-1";
}