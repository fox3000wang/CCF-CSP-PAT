#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201412-1.txt", "r", stdin);

  ios::sync_with_stdio(false);
  cin.tie(0);

  gg n;
  cin >> n;
  gg num[n], o[n];

  for (gg i = 0; i < n; i++)
  {
    cin >> num[i];
  }

  for (gg i = 0; i < n; i++)
  {
    o[i] = 0;
    for (gg j = 0; j <= i; j++)
    {
      if (num[i] == num[j])
      {
        o[i]++;
      }
    }
  }

  for (gg i = 0; i < n; i++)
  {
    cout << o[i] << " ";
  }

  return 0;
}