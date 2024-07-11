#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> getMax(vector<string> operations) {
    vector <int> temp;
    vector <int> res;
    for (int i = 0; i < operations.size(); i++) {
        if (operations[i][0] == '1') {
            string tempS = operations[i].substr(1, operations[i].size());
            long long x = stoi(tempS);
            temp.push_back(x);
        } else if (operations[i][0] == '2'){
            temp.pop_back();
        } else {
            int maxElement = INT_MIN;
            for (int i = 0; i < temp.size(); i++) {
                maxElement = max(maxElement, temp[i]);
            }
            res.push_back(maxElement);
        }
    }
    return res;
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  vector<string> op(n);
  n++;
  while (n--) {
    string s;
    getline(cin, s);
    op.push_back(s);
  }
  vector<int> res = getMax(op);
  res.shrink_to_fit();
  for (int i = 0; i < res.size(); i++) cout << res[i] << endl;
}

/*
10      
1 97   
2
1 20
2
1 26
1 20
2
3
1 91
3
*/