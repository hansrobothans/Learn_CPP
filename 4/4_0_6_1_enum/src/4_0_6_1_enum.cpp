#include <iostream>
enum bits
{
	zero,
	null = 0,
	one,
	numero_uno = 1
};

int main()
{
	using namespace std;
	bits bits_test = zero;
	for(int i = 0; i < 4; i++)
	{
		if(i == 0)
			bits_test = zero;
		else if(i == 1)
			bits_test = null;
		else if(i == 2)
			bits_test = one;
		else if(i == 3)
			bits_test = numero_uno;
		
		switch (bits_test)
		{
		case zero:
			cout << "zero" << endl;
		break;
		// case null: // 不允许定义相同的值的判断条件
		// 	cout << "null" << endl;
		// break;
		case one:
		    cout << "one" << endl;
        break;
        // case numero_uno:
        //     cout << "numero_uno" << endl;
        // break;
		
		default:
			break;
		}
	}

	return 0;
}