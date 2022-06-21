#include <bits/stdc++.h>
using namespace std;
using gg = long long;

// mian
int main()
{
  freopen("201403-2.txt", "r", stdin);

  ios::sync_with_stdio(false);
  cin.tie(0);

  gg n; // 窗口数
  gg m; // 点击次数
  cin >> n >> m;
  vector<gg> o(m);

  vector<vector<gg>> w(n); // 窗口坐标
  for (gg i = 0; i < n; i++)
  {
    w[i].resize(4);
    cin >> w[i][0] >> w[i][1] >> w[i][2] >> w[i][3];
  }

  vector<vector<gg>> c(m); // 点击坐标
  for (gg i = 0; i < m; i++)
  {
    c[i].resize(2);
    cin >> c[i][0] >> c[i][1];
  }

  for (gg i = 0; i < m; i++)
  {
    o[i] = 0;
    for (gg j = n - 1; j >= 0; j--)
    {
      if (w[j][0] <= c[i][0] && c[i][0] <= w[j][2] && w[j][1] <= c[i][1] && c[i][1] <= w[j][3])
      {
        if (o[i] == 0)
        {
          o[i] = j + 1;
        }
      }
    }
    if (o[i] == 0)
    {
      cout << "IGNORED";
    }
    else
    {
      cout << o[i];
    }
    cout << "\n";
  }

  return 0;
}

// 生成九九乘法表
