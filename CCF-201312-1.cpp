/*
试题名称：	出现次数最多的数
时间限制：	1.0s
内存限制：	256.0MB
问题描述：	
问题描述
　　给定n个正整数，找出它们中出现次数最多的数。如果这样的数有多个，请输出其中最小的一个。
输入格式
　　输入的第一行只有一个正整数n(1 ≤ n ≤ 1000)，表示数字的个数。
　　输入的第二行有n个整数s1, s2, …, sn (1 ≤ si ≤ 10000, 1 ≤ i ≤ n)。相邻的数用空格分隔。
输出格式
　　输出这n个次数中出现次数最多的数。如果这样的数有多个，输出其中最小的一个。
样例输入
6
10 1 10 20 30 20
样例输出
10
*/

/*
#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    gg ni, ai;
    cin >> ni;
    map<gg, gg> m;
    while (ni--) {
        cin >> ai;
        ++m[ai];
    }
    cout << max_element(m.begin(), m.end(),
                        [](const pair<gg, gg>& p1, const pair<gg, gg>& p2) {
                            return p1.second < p2.second;
                        }) ->first;
    return 0;
}
*/

/**
 * @file CCF-201312-1.cpp
 * @author fox
 * @brief 
 * @version 0.1
 * @date 2022-03-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "bits/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201312-1.txt", "r", stdin);
  // ios::sync_with_stdio(false);
  // cin.tie(0);

  gg ni;
  cin >> ni;
  gg k[ni], v[ni], t, n = 0;

  for (gg i = 0; i < ni; i++)
  {
    bool has = false;
    cin >> t;
    for (gg j = 0; j < i; j++)
    {
      if (k[j] == t)
      {
        has = true;
        v[j]++;
      }
    }
    if (!has)
    {
      k[n] = t;
      v[n] = 1;
      n++;
    }
  }

  gg maxK = k[0], maxV = v[0];
  for (gg i = 1; i < n; i++)
  {
    if (v[i] > maxV)
    {
      maxV = v[i];
      maxK = k[i];
    }
    if (v[i] == maxV && k[i] < maxK)
    {
      maxK = k[i];
    }
  }
  cout << maxK;
  return 0;
}