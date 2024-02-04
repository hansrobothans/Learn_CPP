#include <iostream>
int main()
{
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << "The ASCIIcode for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCIIcode for " << ch << " is " << i << endl;

    cout << "Displaying char ch using cout.operator<<(char): ";
    cout.put(ch);

    cout.put('!');

    cout << endl << "Done" << endl;
    return 0;
}