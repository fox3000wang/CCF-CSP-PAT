#include <bits/stdc++.h>
using namespace std;
using gg = long long;

bool hasSeven(gg n)
{
  bool r = false;
  if (n % 7 == 0)
  {
    return true;
  }
  while (n > 0)
  {
    if (n % 10 == 7)
    {
      return true;
    }
    else
    {
      n = n / 10;
    }
  }
  return r;
}

int main()
{
  freopen("201912-1.txt", "r", stdin);

  ios::sync_with_stdio(false);
  cin.tie(0);

  gg n;
  vector<gg> o(4);
  cin >> n;

  for (gg i = 1; n > 0; i++)
  {
    if (hasSeven(i))
    {
      o[i % 4]++;
    }
    else
    {
      n--;
    }
  }
  cout << o[1] << "\n";
  cout << o[2] << "\n";
  cout << o[3] << "\n";
  cout << o[0] << "\n";
  return 0;
}