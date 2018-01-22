#include <iostream>
using namespace std;

int main()
{

	long long int a = 600851475143 ;
	int b=2;
	while (a != 1)
	{
		if (a % b == 0) {
			cout << "a:" << a << endl;
			a = a / b; 
			cout << b << endl;
			b = 2;
		}
		else if (b > a)break;
		else b++;
	}


	system("pause");
	return 0;
	
	
}
