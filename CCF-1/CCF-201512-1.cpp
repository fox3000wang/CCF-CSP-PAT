#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201512-1.txt", "r", stdin);
  // ios::sync_with_stdio(false);
  // cin.tie(0);

  gg o = 0;
  string n;
  cin >> n;
  for (gg i = 0; i < n.size(); i++)
  {
    o += (n[i] - '0');
  }
  cout << o;
  return 0;
}