#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int insem = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    // cout << dec; // 默认十进制输出
    cout << "Chest = " << chest << "(decimal for 42)" << endl;
    cout << hex;
    cout << "waist = " << chest << "(hexadecimal for 42)" << endl;
    cout << oct;
    cout << "insem = " << chest << "(octal for 42)" << endl;
    return 0;
}