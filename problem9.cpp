#include <iostream>

using namespace std;

void control(int a,int b,int c)
{
		
	if ((b*b + a*a)==(c*c))
	{
		if (a + b + c == 1000) {
			cout << "a: " << a << "  b: " << b << "   c: " << c << endl;
			long long int product = a*b*c;
			cout << "product: " << product << endl;
		}
	}
}
int main()
{
	int a=3, b=4, c=5;

	for (int a = 3;a<=1000/3; a++)
	{
		for (int b = a+1;b<=500; b++)
		{
			int c = 1000 - a - b;
			control(a, b, c);
		}
	}
	



	system("pause");

	return 0;
}
