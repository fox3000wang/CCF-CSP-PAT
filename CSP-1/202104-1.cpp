#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("202104-1.txt", "r", stdin);

  ios::sync_with_stdio(false);
  cin.tie(0);

  gg ni, mi, li, xi;
  cin >> ni >> mi >> li;

  vector<gg> ans(li);
  for (gg i = 0; i < ni; ++i)
  {
    for (gg j = 0; j < mi; ++j)
    {
      cin >> xi;
      ans[xi]++;
    }
  }
  for (gg i : ans)
  {
    cout << i << " ";
  }
  return 0;
}