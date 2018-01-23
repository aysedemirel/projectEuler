#include <iostream>

using namespace std;

bool prime(int number)
{

	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number%i == 0) return false;
	}
	return true;

	
}
int main()
{
	int number=2,counter=0;

	while (1)
	{
		if (prime(number))counter++;
		if (counter == 10001)break;
		number++;
	}
	cout << "counter: " << counter << "\nnumber:  " << number << endl;

	system("pause");

	return 0;
}

