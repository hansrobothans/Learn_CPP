#include <iostream>
#include <string>
#include <cstring>
int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";

    string str1;
    string str2 = "panther";

    // string对象赋值和字符数组赋值
    str1 = str2;
    strcpy(charr1, charr2);

    // string对象追加和字符数组追加
    str1 += " paste";
    strcat(charr1, " juice");

    // 获取string对象长度和c风格字符串长度
    int len1 = str1.size();
    int len2 = strlen(charr1);

    cout << "The string " << str1 << " contains "
         << len1 << " characters" << endl;

    cout << "The string " << charr1 << " contains "
         << len2 << " characters" << endl;

    return 0;
}