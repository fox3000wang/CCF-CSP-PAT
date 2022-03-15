#include "bits/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201703-1.txt", "r", stdin);
  // ios::sync_with_stdio(false);
  // cin.tie(0);
  gg n, k, o = 0;
  cin >> n;
  cin >> k;
  gg num[n];

  for (gg i = 0; i < n; i++)
  {
    cin >> num[i];
  }

  gg t = 0;
  for (gg i = 0; i < n; i++)
  {
    t += num[i];
    if (t >= k)
    {
      o++;
      t = 0;
    }
  }
  if (t != 0)
  {
    o++;
  }
  cout << o;
  return 0;
}