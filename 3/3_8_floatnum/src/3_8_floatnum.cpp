#include <iostream>
int main()
{
    using namespace std;
    /*
    cout默认会删除结尾0，调用cout.setf()会覆盖这个行为
    调用cout.setf(ios_base::fixed, ios_base::floatfield)会保留小数点后的0
    */
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million *tub;
    cout << ",\nand ten million tubs = ";
    cout << 10 * million *tub << endl;

    cout << "mint = " << mint << " and a million mints = ";
    cout << million *mint << endl;

    return 0;
}