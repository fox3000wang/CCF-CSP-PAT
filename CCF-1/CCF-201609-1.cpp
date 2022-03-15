#include "bits/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201609-1.txt", "r", stdin);
  // ios::sync_with_stdio(false);
  // cin.tie(0);
  gg n, o = 0;
  cin >> n;
  gg num[n];

  for (gg i = 0; i < n; i++)
  {
    cin >> num[i];
  }
  for (gg i = 1; i < n; i++)
  {
    o = max(o, abs(num[i] - num[i - 1]));
  }
  cout << o;
  return 0;
}