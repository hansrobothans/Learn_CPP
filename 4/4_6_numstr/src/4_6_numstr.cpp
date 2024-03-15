#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    /* 0 无法正常获取地址*/
    // cin >> year;
    /* 1 需要将输入队列中换行符读取出来*/
    // cin >> year;
    // cin.get();
    /* 2 需要将输入队列中换行符读取出来*/
    (cin >> year).get();
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year build: " << year << endl;
    cout << "Adress: " << address << endl;
    cout << "Done!\n";


    return 0;
}