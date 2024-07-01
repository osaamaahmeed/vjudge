#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n,target; cin >> n >> target;
  vector<int> vec;
  for(int i=0;i<n-1;i++){int x; cin >> x; vec.push_back(x);}
  sort(vec.begin(),vec.end());
  int sum = 0;
  for (int i = 1; i <= vec.size()-1; i++) { sum += vec[i];}
  
  // for (int i : vec) cout << i << " ";
  cout << endl << sum << endl;
  
  if (sum < target) {
    int number = target - sum;
    if (number <= 100 && number >= 0) cout << number;
    else cout << "-1";
  } else if (sum == target) cout << "0";
}