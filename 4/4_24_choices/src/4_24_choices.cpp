#include <iostream>
#include <vector> //STL C++98
#include <array> // C++11
int main()
{
    using namespace std;
    cout << "4_24_choices" << endl;
    // C或者之前C++
    double al[4] = {1.2, 2.4, 3.6, 4.8};

    // C++98 STL
    vector<double> a2(4);

    // 在C98中没有一个简单的方式去初始化
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;

    // C++11 新建和初始化array对象
    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a4;
    a4 = a3; // 赋值array对象，同样大小的对象是可行的

    // 使用数组标记
    cout << "a1[2]: " << al[2] << " at " << &al[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

    // // 违法操作
    // a1[-2] = 20.2;
    cout << "a1[-2]: " << al[-2] << " at " << &al[-2] << endl;
    cout << "a3[-2]: " << a3[-2] << " at " << &a3[-2] << endl;
    cout << "a4[-2]: " << a4[-2] << " at " << &a4[-2] << endl;



    return 0;
}