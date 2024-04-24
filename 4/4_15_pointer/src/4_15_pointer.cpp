#include <iostream>

int main()
{
    using namespace std;

    int updates = 6;
    int *p_updates;
    p_updates = &updates;

    // 输出值
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    // 输出地址
    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    // 使用指针更改值
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;

    return 0;
}