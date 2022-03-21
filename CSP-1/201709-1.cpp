#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("201709-1.txt", "r", stdin);

  ios::sync_with_stdio(false);
  cin.tie(0);

  gg n;
  cin >> n;
  cout << n / 10 + (n / 50 * 2) + (n % 50 / 30);
  return 0;
}