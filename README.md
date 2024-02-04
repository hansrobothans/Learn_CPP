# 1. Learn_CPP

# 2. 开始学习C++

# 3. 第三章 处理数据

## 3.1. 简单变量

### 3.1.1. 变量名（命名规则）
1. 只能使用字母字符、数字和下划线（_）
2. 名称的第一个字符不可以是数字
3. 区分大小写
4. 不能使用C++关键字
5. 以两个下划线或下划线和大写字母打头的名称被保留给实现（编译器及其使用的资源）使用。以一个下划线开头的名称被保留给实现，用作全局标识符
6. C++名称长度没有限制，但是有些平台有限制

### 3.1.2. 整型

### 3.1.3. 运算符sizeof和头文件limits
1. sizeof
   * 对类型名使用sizeof运算符时，应将类型名放在括号里
   * 对变量名使用sizeof运算符时，括号是可选的
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

3. 常量
* 被设计用来C和C++的头文件
* C++使用关键之const方式创建符号常量

4. 初始化
* 将变量初始化为字面值常量
* 将变量初始化为另一个变量，条件是后者已经定义过
* 将变量初始化为表达式，条件是当程序执行到该声明时

