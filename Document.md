[TOC]

### 设计任务的描述

*Latest updated on: 2017,2,27*

>   **模拟**图书馆管理系统的设计
>
>   学校图书馆有很多图书，每个**教师**、**学生**有多种不同的**借书权限**和**借书数量**，建立图书馆管理系统，包括图书的**购入**、**编码**、**借出**、**还回**、**统计**、**查询**等功能。

实现这个管理系统中的所有功能，并在模拟真实的时间流逝的基础上实现借还书、查询、购入等行为，同时将所有记录作为日志保存。

### 功能需求说明及分析

*Latest updated on: 2017,2,27*

- [ ] 建立描述书籍基本信息的数据结构，并以文件形式保存

      - [ ] 图书编号
      - [ ] 图书部门 (分类)
      - [ ] 图书权限
      - [ ] 书名
      - [ ] 作者
      - [ ] 出版社
      - [ ] 简介
      - [ ] 购入时间
      - [ ] 数量 (库存情况)
      - [ ] 预约情况
- [ ] 建立保存借阅者基本档案的数据结构，并以文件形式保存

      -   [ ] 姓名

      -   [ ] 证件号码

      -   [ ] 所在学院

      -   [ ] 借书权限

      -   [ ] 已借书数量

      -   [ ] 已借书到期时间 / 逾期情况

      -   [ ] 预约书目是否可借

      -   [ ] 账户余额

      -   [ ] 信用情况
- [ ] 实现新书入库 (自动建立档案) 功能
- [ ] 实现借阅与预约功能
- [ ] 实现还书 (交纳欠款) 功能
- [ ] 实现书刊检索功能

      - [ ] 根据名称过滤

      - [ ] 根据编码检索

      - [ ] 根据作者过滤

      - [ ] 根据出版社过滤

      - [ ] 根据图书分类过滤

      - [ ] 检索结果显示：

            - 该图书基本信息
            - 该图书的库存剩余本数、借阅率
            - 剩余本数为零时的可预约本数
- [ ] 能查询读者基本情况
- [ ] 能模拟时间推移
      - [ ] 更新到期时间
      - [ ] 更新预约到期时间
      - [ ] 记录借还书日志

在图书馆管理系统上可以登录两种账户，一种是管理员账户，一种是读者账户，各有不同的权限。

| 权限    | 管理员  |  读者  |
| :---- | :--: | :--: |
| 新书入库  |  √   |  x   |
| 借阅与预约 |  x   |  √   |
| 还书    |  x   |  √   |
| 书刊检索  |  √   |  √   |
| 读者查询  |  √   |  x   |

程序从开始运行便开始模拟时间推移，当鼠标或键盘无输入10秒钟时便默认推移了一天，日志从新的一段开始记录，更新所有日期，对于逾期的情况要进行罚款。

### 总体方案设计说明

*Latest updated on: 2017,2,28*

-[ ] 模块划分
-[ ] 总体结构
-[ ] 实现任务的方法


首先对这个管理系统进行划分，大致可以分为以下几个模块：

1.  主模块

    功能：接受各种输入指令，调用下面的各个模块。

2.  图书管理模块

    功能：管理图书清单，提供对具体一本书的基本信息 (如：作者、简介、出版社等) 进行访问或修改的接口。

3.  账户管理模块


    功能：管理记录两种拥有不同权限的图书馆账户清单，提供对具体某个账户的基本情况的查看的接口。

4.  新书入库模块

    功能：对管理员账户执行新书入库操作后对新书进行自动编号并更新图书清单与日志。

5.  书目检索模块

    功能：提供按照不同方式检索数目的接口，提供对具体一本书显示其基本信息的接口。

6.  借阅与预约模块

    功能：更新相关记录、日志。

7.  图书归还模块

    功能：更新相关记录、如果该图书已有预约则通知预约者。

8.  读者查询模块

    功能：提供对某一位读者显示其基本信息的接口。

9.  日志记录模块

    功能：按照时间自动更新日志，与主模块同步运行。
