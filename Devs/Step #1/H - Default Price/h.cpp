#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n,m; cin >> n >> m;
  string price[n], bought[m];
  int arr[m+1];
  for (int i = 0; i < n; i++) cin >> price[i];
  for (int i = 0; i < m; i++) cin >> bought[i];
  for (int i = 0; i < m+1; i++) cin >> arr[i];
  
  int res = 0;
  int minIndex = INT_MAX,maxIndex = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (bought[j] == price[i]) {
        minIndex = min(minIndex,i);
        maxIndex = max(maxIndex,i);
      }
    }
  }
  
  if (minIndex == maxIndex) {minIndex = 0; res+=arr[0];}
  // cout << minIndex << " " << maxIndex << endl;
  for (int i = minIndex; i <= maxIndex; i++)
  {
    res += arr[i];
  }
  
  cout << res;

}

