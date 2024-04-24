#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    cout << "4_20_ptrstr" << endl;
    char animal[20] = "bear";
    const char *bird = "wren";
    char *ps;

    cout << animal << " and ";
    cout << bird << endl;

    // // 可能显示乱码，也可能导致崩溃
    // cout << ps << endl;

    cout << "Enter a kind of animal: ";
    cin >> animal;

    // // 非常可怕的尝试；ps不指向已分配的空间
    // cin >> ps;

    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);

    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;

    delete[] ps;
    return 0;
}