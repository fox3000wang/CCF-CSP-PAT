#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201312-1.txt", "r", stdin);

  ios::sync_with_stdio(false);
  cin.tie(0);

  gg ni;
  cin >> ni;
  gg k[ni], v[ni], t, n = 0;

  for (gg i = 0; i < ni; i++)
  {
    bool has = false;
    cin >> t;
    for (gg j = 0; j < i; j++)
    {
      if (k[j] == t)
      {
        has = true;
        v[j]++;
      }
    }
    if (!has)
    {
      k[n] = t;
      v[n] = 1;
      n++;
    }
  }

  gg maxK = k[0], maxV = v[0];
  for (gg i = 1; i < n; i++)
  {
    if (v[i] > maxV)
    {
      maxV = v[i];
      maxK = k[i];
    }
    if (v[i] == maxV && k[i] < maxK)
    {
      maxK = k[i];
    }
  }
  cout << maxK;
  return 0;
}