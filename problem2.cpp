#include <iostream>
using namespace std;

int main()
{
	int a = 1,sum=0,b=1,temp;
	while (a < 4000000)
	{
		if (a % 2 == 0) sum += a;
		temp = a;
		a += b;
		b = temp;
	}
	cout << sum << endl;
	

	system("pause");
	return 0;
	
	
}
