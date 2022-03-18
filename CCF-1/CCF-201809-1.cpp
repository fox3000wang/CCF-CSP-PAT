#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201809-1.txt", "r", stdin);

  ios::sync_with_stdio(false);
  cin.tie(0);

  gg n;
  cin >> n;
  gg num[n], ans[n];

  for (gg i = 0; i < n; i++)
  {
    cin >> num[i];
  }

  ans[0] = (num[0] + num[1]) / 2;
  ans[n - 1] = (num[n - 1] + num[n - 2]) / 2;

  for (gg i = 1; i < (n - 1); i++)
  {
    ans[i] = (num[i - 1] + num[i] + num[i + 1]) / 3;
  }

  for (gg i = 0; i < n; i++)
  {
    cout << ans[i] << " ";
  }

  return 0;
}