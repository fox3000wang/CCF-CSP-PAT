#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  //freopen("202112-1-1.txt", "r", stdin);
  freopen("202112-1-2.txt", "r", stdin);

  ios::sync_with_stdio(false);
  cin.tie(0);

  gg n, N, sum = 0;
  cin >> n >> N;

  vector<gg> ai(n);
  for (gg &i : ai)
  {
    cin >> i;
  }

  for (gg i = 0, j = 0; i < N; i++)
  {
    if (ai[j] == i)
    {
      j++;
    }
    sum += j;
  }

  cout << sum;
  return 0;
}