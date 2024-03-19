<!-- TOC -->

- [Learn_CPP](#1-Learn_CPP)
    - [github codespace在线编辑](#11-githubcodespace在线编辑)
    - [切换默认CMakeLists.txt](#12-切换默认CMakeLists.txt)
- [开始学习C++](#2-开始学习C++)
- [第三章 处理数据](#3-第三章处理数据)
    - [简单变量](#31-简单变量)
        - [变量名（命名规则）](#311-变量名（命名规则）)
        - [整型](#312-整型)
        - [运算符sizeof和头文件limits](#313-运算符sizeof和头文件limits)
        - [无符号类型](#314-无符号类型)
        - [选择整型类型](#315-选择整型类型)
        - [整型字面值](#316-整型字面值)
        - [C++常亮类型](#317-C++常亮类型)
        - [char类型：字符和小整数](#318-char类型：字符和小整数)
        - [bool类型](#319-bool类型)
    - [const限定符](#32-const限定符)
    - [浮点数](#33-浮点数)
        - [书写浮点数](#331-书写浮点数)
        - [浮点类型](#332-浮点类型)
        - [浮点常量](#333-浮点常量)
        - [浮点常量的优缺点](#334-浮点常量的优缺点)
    - [C++算术运算符](#34-C++算术运算符)
        - [运算符优先级和结合性](#341-运算符优先级和结合性)
        - [除法分支](#342-除法分支)
        - [求模运算符](#343-求模运算符)
        - [类型转换](#344-类型转换)
    - [C++11中的auto声明（第9章）](#35-C++11中的auto声明（第9章）)
- [复合类型](#4-复合类型)
    - [数组](#41-数组)
        - [数组初始化规则](#411-数组初始化规则)
        - [C++11数组初始化方法](#412-C++11数组初始化方法)
    - [字符串](#42-字符串)
        - [拼接字符串常量](#421-拼接字符串常量)
        - [在数组中使用字符串](#422-在数组中使用字符串)
        - [cin](#423-cin)
        - [每次读取一行字符串输入](#424-每次读取一行字符串输入)
        - [混合输入字符串和数字](#425-混合输入字符串和数字)
    - [string类](#43-string类)
        - [C++11字符串初始化](#431-C++11字符串初始化)
        - [赋值、拼接和附加](#432-赋值、拼接和附加)
        - [string类的其他操作](#433-string类的其他操作)
        - [string类I/O](#434-string类I/O)
        - [其他形式的字符串字面值](#435-其他形式的字符串字面值)
    - [结构简介](#44-结构简介)
        - [在程序中使用结构](#441-在程序中使用结构)
        - [C++11结构体初始化](#442-C++11结构体初始化)
        - [结构体可以将string类作为成员吗？可以！](#443-结构体可以将string类作为成员吗？可以！)
        - [其他结构属性](#444-其他结构属性)
        - [结构数组](#445-结构数组)
        - [结构体中的位字段](#446-结构体中的位字段)
    - [共用体](#45-共用体)
    - [枚举体](#46-枚举体)
        - [设置枚举量的值](#461-设置枚举量的值)
        - [枚举的取值范围](#462-枚举的取值范围)

<!-- /TOC -->






<a id="toc_anchor" name="#1-Learn_CPP"></a>

# 1. Learn_CPP

<a id="toc_anchor" name="#11-githubcodespace在线编辑"></a>

## 1.1. github codespace在线编辑
* 打开github仓库地址，直接按下 **.**，即可打开githu的VSCode在线打开
* 打开后在运行调试点击运行，可创建codespace

<a id="toc_anchor" name="#12-切换默认CMakeLists.txt"></a>

## 1.2. 切换默认CMakeLists.txt
* 打开根目录下的.vscode/settings.json
- [settings.json](./.vscode/settings.json)
* 更改参数，运行根目录下clean脚本，即可重新运行
* "cmake.sourceDirectory": "/workspaces/Learn_CPP/4/4_1_arrayone"
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>


<a id="toc_anchor" name="#2-开始学习C++"></a>

# 2. 开始学习C++

<a id="toc_anchor" name="#3-第三章处理数据"></a>

# 3. 第三章 处理数据

<a id="toc_anchor" name="#31-简单变量"></a>

## 3.1. 简单变量

<a id="toc_anchor" name="#311-变量名（命名规则）"></a>

### 3.1.1. 变量名（命名规则）
1. 只能使用字母字符、数字和下划线（_）
2. 名称的第一个字符不可以是数字
3. 区分大小写
4. 不能使用C++关键字
5. 以两个下划线或下划线和大写字母打头的名称被保留给实现（编译器及其使用的资源）使用。以一个下划线开头的名称被保留给实现，用作全局标识符
6. C++名称长度没有限制，但是有些平台有限制

<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#312-整型"></a>

### 3.1.2. 整型
<a id="toc_anchor" name="#313-运算符sizeof和头文件limits"></a>

### 3.1.3. 运算符sizeof和头文件limits
1. sizeof(同C语言)
   * 对类型名使用sizeof运算符时，应将**类型名放在括号里**
   * 对变量名使用sizeof运算符时，**括号是可选的**
2. 头文件climits 

| 符号变量 | 表示     |
| -------- | -------- |
| CHAR_BIT | char的位数   |
| CHAR_MAX | char的最大值 |
| CHAR_MIN | char的最小值 |
| SCHAR_MAX | signed char的最大值 |
| SCHAR_MIN | signed char的最小值 |
| UCHAR_MAX | unsigned char的最大值 |
| SHRT_MAX | short的最大值 |
| SHRT_MIN | short的最小值 |
| USHRT_MAX | unsigned short的最大值 |
| INT_MAX | int的最大值 |
| INT_MIN | int的最小值 |
| UINT_MAX | unsigned int的最大值 |
| INT_MAX | int的最大值 |
| INT_MIN | int的最小值 |
| UINT_MAX | unsigned int的最大值 |
| LONG_MAX | long的最大值 |
| LONG_MIN | long的最小值 |
| ULONG_MAX | unsigned long的最大值 |
| LLONG_MAX | long long的最大值 |
| LLONG_MIN | long long的最小值 |
| ULLONG_MAX | unsigned long long的最大值 |

1. 符号常量
* 被设计用来C和C++的头文件必须使用#define
* C++使用关键之const方式创建符号常量

1. 初始化
* 将变量初始化为字面值常量
* 将变量初始化为另一个变量，条件是后者已经定义过
* 将变量初始化为表达式，条件是当程序执行到该声明时，表达式中的所有值都是已知的。

1. C++11初始化方式
```c {.line-numbers}
   int i = {0};
   int i{0};   // 可以不需要等号
   int i = {}; // 初始化为0
   int i{};
```
* 有助于更好的防范类型转换错误
* 使新手更容易学习C++

<a id="toc_anchor" name="#314-无符号类型"></a>

### 3.1.4. 无符号类型
* 关键字 unsigned
* C++确保了无符号类型超越限制时不出错
* C++并不保证整型超越限制（上溢和下溢）时不出错
![3_1典型的整数溢出行为](./image/3_1典型的整数溢出行为.png)  

<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#315-选择整型类型"></a>

### 3.1.5. 选择整型类型
* 节省一点就是赢得一点
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#316-整型字面值"></a>

### 3.1.6. 整型字面值
| 进制 | 说明     |
| -------- | -------- |
| 10进制 | 如果第一位为1~9   |
| 8进制 | 如果第一位为0，第二位为1~7   |
| 16进制 | 如果前两位为0x或0X。字符a ~ f和A ~ F表示十六进制位   |

* 输出十六进制和十进制。在修改格式之前，原来格式将一直有效

| 进制 | 代码     |
| -------- | -------- |
| 10进制 | cout << dec   |
| 8进制 | cout << oct   |
| 16进制 | cout << hex   |

<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#317-C++常亮类型"></a>

### 3.1.7. C++常亮类型
* 整型常量默认int
* 后缀：
  * u表示unsigned
  * l表示long
  * ul表示unsigned long
  * ll表示long long
* 长度：
  * 对于不带后缀的十进制，按照int、long、long long的顺序查找最长的匹配类型
  * 对于不带后缀的八进制和十六进制，按照unsigned int、unsigned int、unsigned long、unsigned long long的顺序查找最长的匹配类型
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#318-char类型：字符和小整数"></a>

### 3.1.8. char类型：字符和小整数
1. 值的类型将引导cout选择如何显示值
2. 成员函数cout.put()。为什么会有这个成员函数，是历史遗留问题。
3. char字面值
   * 单引号
   * 转义字符
   * 转义序列
4. 通用字符名
   * 通用字符名以\u开头，后面是16进制数
   * 通用字符名可以用于任何字符
5. char默认，既不是没符号，也不是有符号。有需要情况下，需要显示指出。
6. wchar_t
   * 宽字符类型
   * 与underlying类型长度和符号属性相同
   * cin和cout是char流，所有不适于处理 wchar_t
   * wcin和wcout处理 wchar_t
   * 前缀L指示宽字符常量和宽字符串
7. char16_t和char32_t
   * 无符号类型
   * u前缀表示char16_t
   * U前缀表示char32_t
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#319-bool类型"></a>

### 3.1.9. bool类型
* **非0即1**
* true转换成1，false转换成0
* 任何数字值或指针值都可以被隐式转换成bool（即不用显式强制转换）
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#32-const限定符"></a>

## 3.2. const限定符
1. const声明常量
2. const相较于#define的**优势**：
   * 明确指定类型
   * 使用C++作用域将定义限制在特定的函数或者文件中
   * 可以用于更复杂的类型，如数组和结构
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#33-浮点数"></a>

## 3.3. 浮点数
* 数值和缩放因子
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#331-书写浮点数"></a>

### 3.3.1. 书写浮点数
* 标准小数表示法（也允许使用,做小数点）
* E表示法（也可以使用e）
  d.ddE+n
  d.ddE-n
  d.dde+n
  -d.ddE+n
<a id="toc_anchor" name="#332-浮点类型"></a>

### 3.3.2. 浮点类型
1. 浮点类型
   * float、double、long double
   * floa：32位，指数范围至少-37到+37
   * double：64位，指数范围至少-37到+37
   * long double：96位，指数范围至少-37到+37
   * 在头文件cfloat或float.h中可以找到系统的限制。
   * 有些C++实现未添加头文件cfloat，有些基于ANSI C之前的编译器的C++实现未添加头文件float.h。

2. cout.setf()方法
   * cout默认会删除结尾0，调用cout.setf()会覆盖这个行为
   * 调用cout.setf(ios_base::fixed, ios_base::floatfield)会保留小数点后的0
   * 调用cout.setf(ios_base::scientific, ios_base::floatfield)会使用科学计数法

<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#333-浮点常量"></a>

### 3.3.3. 浮点常量
* 默认浮点常量都是double类型
* 希望浮点常量是float类型，需要在数字后面加上f或F
* 对于long double类型，需要在数字后面加上l或L
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#334-浮点常量的优缺点"></a>

### 3.3.4. 浮点常量的优缺点
1. 优点
   * 可以表示整数之间的值
   * 因为有缩放因子，所有可以表示的范围大得多
2. 缺点
   * 运算速度慢
   * 精度将降低

<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#34-C++算术运算符"></a>

## 3.4. C++算术运算符
* \\+ 运算符
* \- 运算符
* \* 运算符
* / 运算符
* % 运算符：
  * 求模
  * 操作数只能是整数
  * 如果操作数其中一个是负数，则满足如下规则：(a/b)*b + a%b = a
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#341-运算符优先级和结合性"></a>

### 3.4.1. 运算符优先级和结合性
1. 优先级
2. 结合性(方向)
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#342-除法分支"></a>

### 3.4.2. 除法分支
1. 两个操作数都是整数，则结果为整数
2. 其中一个或者两个为小数，则结果为浮点数
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#343-求模运算符"></a>

### 3.4.3. 求模运算符
1. 求模运算符的结果是整数
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#344-类型转换"></a>

### 3.4.4. 类型转换
1. C++自动执行类型转换
   * 将一种算术类型的值赋给另一种算术类型的变量时,C++将对值进行转换
   * 表达式中包含不同的类型时,C++将对值进行转换;
   * 将参数传递给函数时,C++将对值进行转换。
2. 初始化和赋值进行的转换
3. 以{}方式初始化时进行的转换（C++11）
   * 大括号的初始化称为列表初始化
   * 列表初始化不允许**缩窄**
   * 且列表初始化需要**常量**
     ```c {.line-numbers}
     const int code = 66;
     int x=66;
     char c1 {31325}; // 缩窄，不被允许
     char c2 = {66}; // 可以，因为存的下
     char C3 {code}; // 可以，因为存的下
     char C4 = {x}; // 不可以，因为x不是常量
     X = 31325;
     char c5 = x; // 这样的初始化是可以的
     ```
4. 表达式中的转换
   * 出现时自动转换
     *   **整型提升：**
         * 在计算表达式时,C++将bool、char、unsigned char、signed char和short值转换为int
         * 如果short比int短,则unsigned short类型将被转换为int;如果两种类型的长度相同,则unsignedshort类型将被转换为unsigned int。
   * 有些类型与其他类型同时出现在表达式时将被转换
5. 传递参数时的转换：传递参数时的类型转换通常由C++函数原型控制。
6. 强制类型转换：
   * 强制转换的通用格式如下:
     * (typeName) value // 来自C语言
     * typeName (value) // 纯粹的C++
   * 4个强制类型转换运算符（15章介绍）
     * static_cast\<typeName> (value) 可用于将值从一种数值类型转换为另一种数值类型
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#35-C++11中的auto声明（第9章）"></a>

## 3.5. C++11中的auto声明（第9章）
* 如果使用关键字auto,而不指定变量的类型,编译器将把变量的类型设置成与初始值相同:
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#4-复合类型"></a>

# 4. 复合类型
<a id="toc_anchor" name="#41-数组"></a>

## 4.1. 数组
* 数组声明：
  1. 存储在每个元素中的值的类型;
  2. 数组名;
  3. 数组中的元素数。编译时已知
* 数组使用：
  1. 可以单独访问数组元素。使用下标或者索引。
  2. 从0开始
  3. 编译器不会检查使用发下标是否有效

<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#411-数组初始化规则"></a>

### 4.1.1. 数组初始化规则
1. 只有在定义数组时才能使用初始化,此后就不能使用了
2. 不能将一个数组赋给另一个数组
3. 初始化数组时,提供的值的个数可以少于数组的元素数目。
4. 如果只对数组的一部分进行初始化,则编译器将把其他元素设置为0。
5. 如果初始化数组时方括号内([])为空,C++编译器将计算元素个数
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#412-C++11数组初始化方法"></a>

### 4.1.2. C++11数组初始化方法
列表初始化
* 初始化数组时,可省略等号(=)
* 可不在大括号内包含任何东西,这将把所有元素都设置为零
* 列表初始化禁止缩窄转换
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#42-字符串"></a>

## 4.2. 字符串
1. C风格字符串
   * 以空字符结尾，空字符被写作'\0'
   * 字符数组初始化为字符串方法：
     * 显式加上空字符
     * 使用双引号括起的字符串（字符串常量或字符串字面值）
   * 字符串读入char数组中时，会自动加上空字符
   * 字符串常量不能与字符常量互换
2. 基于string类库
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#421-拼接字符串常量"></a>

### 4.2.1. 拼接字符串常量
* 任何两个由空白(空格、制表符和换行符)分隔的字符串常量都将**自动拼接**成一个。
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#422-在数组中使用字符串"></a>

### 4.2.2. 在数组中使用字符串
1. 将数组初始化为字符串常量
2. 将键盘或文件输入读入到数组中
3. 确认字符串长度(只计算可见字符长度)-strlen()
- [4_2_string.cpp](./4/4_2_string/src/4_2_string.cpp)
<a id="toc_anchor" name="#423-cin"></a>

### 4.2.3. cin
- [4_3_instr1.cpp](./4/4_3_instr1/src/4_3_instr1.cpp)
* cin使用空白(空格、制表符和换行符)来确定字符串的结束位置，且**空白符会保存在输入队列**
* cin在获取字符数组输入时，只读取一个单词
* cin开始输入之前它们跳过空白（空格、换行符和制表符）
* 

<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#424-每次读取一行字符串输入"></a>

### 4.2.4. 每次读取一行字符串输入
1. 面向行的输入：**cin.getline(字符数组名, 字符个数, 结束标志)**
   - [4_4_instr2.cpp](./4/4_4_instr2/src/4_4_instr2.cpp)
   * 字符个数包括不可见字符
   * 默认使用换行符作为结束标志
   * 不读入输入的字符串的结束标志（如换行符）
   * **结束符不会保存在输入队列**
2. 面向行的输入：**cin.get**
   - [4_5_instr3.cpp](./4/4_5_instr3/src/4_5_instr3.cpp)
   * cin.get(char* s, streamsize n)：会读取到行尾，但是**换行符会保存在输入队列**
   * cin.get():可读取下一个字符（即使是换行符）
   * cin.get(char* s, streamsize n).get():消耗掉输入队列的换行符
   * 为什么使用get()而不是getline()？
     * 老式未实现getline
     * get使输入更仔细。比如如何知道停止读取的原因是已经读取一整行了还是数组填满了?可以使用cin.get()查看下一个输入字符，如果下一个输入字符是换行符，则说明已经读取了一整行。
3. 空行和其他问题  
   * 空行：
     * 最初做法：下一条输入语句将在前一条getline()或get()结束读取的位置开始读取
     * 当前做法：当get()（不是getline()）读取空行后将设置时效为（failbit），之后输入将被阻断。使用cin.clear()来恢复输入。
   * 其他问题：
     * 输入行包含的字符数比指定的多，get()和getline()将把余下字符留在输入队列，而getline()会设置失效位，并关闭之后输入。
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>

<a id="toc_anchor" name="#425-混合输入字符串和数字"></a>

### 4.2.5. 混合输入字符串和数字
* 当混合输入数字和字符串时，需注意数字会把换行符留在输入队列中
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>

<a id="toc_anchor" name="#43-string类"></a>

## 4.3. string类
- [4_7_strtype1.cpp](./4/4_7_strtype1/src/4_7_strtype1.cpp)
* C++98添加
* 需包含头文件string，string类位于命名空间std中
* string对象和字符数数组区别：
  * 可以将string对象声明为简单变量而不是数组
  * 类设计可以让程序**自动处理**string的大小
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#431-C++11字符串初始化"></a>

### 4.3.1. C++11字符串初始化

<a id="toc_anchor" name="#432-赋值、拼接和附加"></a>

### 4.3.2. 赋值、拼接和附加
- [4_8_strtype2.cpp](./4/4_8_strtype2/src/4_8_strtype2.cpp)
* 可以将一个string对象赋值给另一个string对象，而数组不可以
* 可以使用+合并两个string对象，可以使用+=追加
* 可以将C风格字符串或string对象与string对象相加，或将他们附加到sting对象的末尾
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#433-string类的其他操作"></a>

### 4.3.3. string类的其他操作
- [4_9_strtype3.cpp](./4/4_9_strtype3/src/4_9_strtype3.cpp)
* 对于c风格字符串，使用cstring中的函数完成操作
* string对象相较于c风格字符数组优势：
  * 处理时语法更简单
  * 字符数组总是存在目标数组过小，无法存储指定信息的危险
  * string类具有自动调整大小的功能
  * c风格字符串，提供**strncat()和strncpy()**，可以指定目标数组最大允许长度
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#434-string类I/O"></a>

### 4.3.4. string类I/O
- [4_10_strtype4.cpp](./4/4_10_strtype4/src/4_10_strtype4.cpp)
* 处理string对象的代码使用string类的一个友元函数
<a id="toc_anchor" name="#435-其他形式的字符串字面值"></a>

### 4.3.5. 其他形式的字符串字面值
| 字符类型 | 字面值前缀    |标准    |
| --------  | --------  | ---    |
| char      |           |        |
| wchar_t   |  L        |        |
| char16_t  |  u        | C++11  |
| char32_t  |  U        | C++11  |

* C++11新增：
  * UTF-8使用u8前缀
  * 原始（raw）字符串：
    * R前缀（即不再转义，界定符为 **"(** 和 **)"**）
    * 允许支持自定义界定符：
      * 如：**"+*(** 和 **)+*"**
      * 默认界定符之间添加任意数量的基本字符，但空格、括号、斜杠和控制字符除外
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#44-结构简介"></a>

## 4.4. 结构简介
* 创建结构：
  * 定义结构描述
  * 创建结构变量
* C++允许在声明结构体变量时省略关键字struct
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#441-在程序中使用结构"></a>

### 4.4.1. 在程序中使用结构
- [4_11_structur.cpp](./4/4_11_structur/src/4_11_structur.cpp)
* C++不提倡使用外部变量，但是提倡使用外部结构体声明。另外在外部声明符号常量通常更合理
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#442-C++11结构体初始化"></a>

### 4.4.2. C++11结构体初始化
* 列表初始化，且等号可选
* 若大括号未包含任何东西，每个成员被设置为零
* 不允许缩窄转换
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#443-结构体可以将string类作为成员吗？可以！"></a>

### 4.4.3. 结构体可以将string类作为成员吗？可以！
```c++
#include <string>
struct inflatable
{
  std::string name;
  float volume;
  double price;
};
```
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#444-其他结构属性"></a>

### 4.4.4. 其他结构属性
* 可以作为函数参数或者返回值
* 可以使用赋值运算符将整个结构体赋值给另一个结构体变量（成员赋值）
* 可以同时完成定义结构体和创建结构体变量
* 可以声明没有名称的结构体类型
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#445-结构数组"></a>

### 4.4.5. 结构数组

<a id="toc_anchor" name="#446-结构体中的位字段"></a>

### 4.4.6. 结构体中的位字段
* 允许指定占用特定位数的结构体成员
* 字段的类型应该为整型或者枚举，接下来是冒号，冒号后面是一个数字，它指定了使用的位数
* 可以使用没有名称的字段来提供间距
* 每个成员都被称为位字段
```c++
struct torgle_register
{
  unsigned int SN : 4;  // 4 bits for SN value
  unsigned int : 4;     // 4 bits unused
  bool goodIn : 1;      // valid input (1 bit)
  bool goodTorgle : 1;  // successful torgling
}
```
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>
<a id="toc_anchor" name="#45-共用体"></a>

## 4.5. 共用体
* 能存储不同数据类型，但是同时只能存储其中一种类型
* 共用体长度为起最大成员的长度

<a id="toc_anchor" name="#46-枚举体"></a>

## 4.6. 枚举体
* 创建符号常量
* 代替const
* 允许定义新类型，但必须按严格的限制进行
* 枚举体，枚举量
* 默认将整数值赋给枚举量，可以显式的指定整数值来覆盖默认值
* 枚举变量具有一些特殊属性：
  * 在不进行强制类型转换的情况下，只能将定义枚举时使用的枚举量赋值给这种枚举的变量
  * 对于枚举，只定义了赋值运算符，没有定义算术运算符
  * 枚举量是整型，可被提升为int类型，但int不能自动转换成枚举类型
  * 如果int值有效，则可以通过强制类型转换将int值赋给枚举变量
<div align="right">
    <b><a href="#1-Learn_CPP">↥ back to top</a></b>
</div>

<a id="toc_anchor" name="#461-设置枚举量的值"></a>

### 4.6.1. 设置枚举量的值
- [4_0_6_1_enum.cpp](./4/4_0_6_1_enum/src/4_0_6_1_enum.cpp)
1. 可以使用赋值运算符显式地给枚举量赋值
2. 指定的值，必须是整数
3. 也可以显式地定义其中一些枚举量的值。默认从零开始。后面未定义的值，比前面枚举量大1。
4. 可以创建多个值相同的枚举量

<a id="toc_anchor" name="#462-枚举的取值范围"></a>

### 4.6.2. 枚举的取值范围
1. 上限：
   1. 最大值的最小2次幂减1。如101->128->127
2. 下限：
   1. 最小值不小于0，则下限为0
   2. 最小值小于0，最大值的最小2次幂减1加上负号。如-6 -> -8 -> -7