#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("201312-1.txt", "r", stdin);

  ios::sync_with_stdio(false);
  cin.tie(0);

  gg n, o = 0;
  cin >> n;

  vector<gg> ai(n);
  for (gg &i : ai)
  {
    cin >> i;
  }

  cout << o;
  return 0;
}