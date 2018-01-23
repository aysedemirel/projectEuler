#include <iostream>
using namespace std;

int large;//global
void palindrome(int div)
{
	int mult = 1, number, sum=0, i=0, bas[6];
	number = div; //a*b
	while (div > 1)
	{                                  //9009%10=9(units digit),9009/10=900---900%10=0(tens digit),900/10=90
		bas[i] = div % 10;             //90%10=0(hundreds digit),90/10=9---9%10=9(thousands digit),9/10=0
		div = div / 10;
		i++;
	}
	int last = i;

	for (int j = 0; j < i; j++)//make new number(reverse old)
	{
		for (int k = last; k > 1; k--)
			mult *= 10;
		last--;
		sum += bas[j] * mult;
		mult = 1;
	}

	if (number == sum) //9001==1009
	{
		if (large < number) large = number;
	}
}
int main()
{
	int a, b;
	large = 100 * 100;//initialize
	for (a=100; a <= 999; a++) 
	{
		for (b=100; b <= 999; b++) 
		{
			palindrome(a*b);
		}
	}

	cout << "largest:  " << large << endl;

	system("pause");
	return 0;
	
	
}
