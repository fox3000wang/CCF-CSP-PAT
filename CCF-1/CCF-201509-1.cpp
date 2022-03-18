#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201509-1.txt", "r", stdin);

  ios::sync_with_stdio(false);
  cin.tie(0);

  gg n, o = 0;
  cin >> n;
  gg num[n];
  for (gg i = 0; i < n; i++)
  {
    cin >> num[i];
    if (num[i] != num[i - 1])
    {
      o++;
    }
  }
  cout << o;
  return 0;
}