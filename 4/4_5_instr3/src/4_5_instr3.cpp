#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: \n";
    // cin.getline(name, ArSize);  // 读取完整的一行输入
    cin.get(name, ArSize).get();  // 读取字符串，和换行符
    cout << "Enter your favorite dessert: \n";
    // cin.getline(dessert, ArSize);
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";


    return 0;
}