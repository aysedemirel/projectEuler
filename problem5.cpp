#include <iostream>
using namespace std;


int main()
{
    int number = 8*9*5*7*11*13*17*19;//prime number and aditional number(8->2*2*2)(9->3*3)
	int counter = 0;
	number *= 2;
	while (counter != 20)
	{
		counter = 0;
		for (int i = 1; i <= 20; i++)
		{
			if (number%i == 0)counter++;
		}
        if(counter==20)cout << number << endl;
		number++;
	}
	
	system("pause");
	return 0;
	
	
}
