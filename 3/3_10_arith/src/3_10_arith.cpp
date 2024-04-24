#include <iostream>
int main()
{
    using namespace std;
    float hats, heads;
    /*
    cout默认会删除结尾0，调用cout.setf()会覆盖这个行为
    调用cout.setf(ios_base::fixed, ios_base::floatfield)会保留小数点后的0
    */
    cout.setf(ios_base::fixed, ios_base::floatfield);

    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

    cout << "hats = " << hats << ", heads = " << heads << endl;
    cout << "hats +  heads = " << hats + heads << endl;
    cout << "hats -  heads = " << hats - heads << endl;
    cout << "hats *  heads = " << hats *heads << endl;
    cout << "hats /  heads = " << hats / heads << endl;
    return 0;
}