#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201909-1.txt", "r", stdin);

  ios::sync_with_stdio(false);
  cin.tie(0);

  gg n, m, t = 0, k, p;
  cin >> n >> m;
  m++;

  vector<vector<gg>> o(n);
  for (gg i = 0; i < o.size(); i++)
  {
    o[i].resize(m);
  }

  vector<gg> d(n);
  for (gg i = 0; i < o.size(); i++)
  {
    d[i] = 0;
    for (gg j = 0; j < o[i].size(); j++)
    {
      cin >> o[i][j];
      t += o[i][j];
      if (j != 0)
      {
        d[i] += o[i][j];
      }
    }
  }

  k = 0, p = d[0];
  for (gg i = 1; i < d.size(); i++)
  {
    if (d[i] < p)
    {
      k = i;
      p = d[i];
    }
  }

  cout << t << " " << ++k << " " << abs(p);
  return 0;
}