#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201312-2.txt", "r", stdin);
  string si;
  cin >> si;

  gg num = 1, sum = 0;
  for (int i = 0; i < si.size() - 1; i++)
  {
    if (isdigit(si[i]))
    {
      sum += (si[i] - '0') * num++;
    }
  }
  char c = sum % 11;
  if (c == 10)
  {
    c = 'X';
  }
  else
  {
    c = c + '0';
  }
  if (si.back() == c)
  {
    cout << "Right";
  }
  else
  {
    si.back() = c;
    cout << si;
  }
  return 0;
}