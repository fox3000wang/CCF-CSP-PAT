# CCF-CSP-PAT

CCF CSP 认证小白入门

> 本文适合有些编程基础知识，但是对 CCF CSP 完全不知道的童鞋

---

## 基础知识

[官网](https://cspro.org/)

计算机软件能力考试认证，简称软件能力认证。

[CCF 计算机职业资格认证系列一 CCF 软件能力认证 Certified Software Professional（CSP）](https://www.cspro.org/cms/show.action?code=publish_4028807662f1ccee0162f55d6abc0037&siteid=100000&newsid=62ebd5ce75b54c56a04332c97705f421&channelid=0000000107)

基础知识：

- 程序设计基础
- 数据结构
- 算法与算法设计策略

编程语言：

- C/C++
- Java
- Python

[历届认证总体情况](https://www.cspro.org/Scores/)

每届参加人数 6000-10000 多，满分 500，平均分 150。

可以看成 100 分的卷子，平均分 30 分，可见这个考试的门槛还是比较高的。

---

## 基础环境搭建

一般用户的操作系统为以下 3 个平台

- Windows
- Linux
- macOS

编程环境还是强烈推荐用 [VSCode]()

windows 环境配置可以参考下面这篇文章

[挑把趁手的兵器——VSCode 配置 C/C++学习环境（小白向）](https://zhuanlan.zhihu.com/p/147366852)

Linux 用户肯定各个都是大神，我们膜拜就好了，这篇文章不大适合你。

macOS 可以参考我的后续

---

## macOS 环境搭建

依赖

1. AppStore 安装 Xcode 的最新版本(免费)
2. 在 Xcode 里面安装 CommandLineTools(免费)
3. 安装 homebrew

开发环境：

1. 下载安装 [VSCode](https://code.visualstudio.com/)
2. 安装 c++扩展

## 做题模版

```c++
#include <bits/stdc++.h> // 万能头文件
using namespace std;     // 使用标准命名空间
using gg = long long;    //（C++11）超长整形 至少64位
int main()
{
  // 辅助调试用, 提交前删除这一行
  freopen("CCF-201312-3.txt", "r", stdin); // 测试用例写在CCF-201312-3.txt里

  ios::sync_with_stdio(false); // 标准输入
  cin.tie(0);                  // 标准输入

  gg n;
  cin >> n; //读取输入，赋值到n上

  // you code

  cout << n; // 标准输出 答案
  return 0;
}
```

## 常见问题

### 万能头文件无法加载

```c++
error: 'bits/stdc++.h' file not found with <angled> include; use "quotes" instead
#include <bits/stdc++.h>
         ^~~~~~~~~~~~~~~
         "bits/stdc++.h"
1 error generated.
```

https://www.zhihu.com/question/64960364/answer/226132659

```
cd /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1

mkdir bits

cp ~/Downloads/stdc++.h bits/
```
