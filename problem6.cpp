#include <iostream>
using namespace std;


int main()
{
	int number = 0, sum=0, result;
	for (int i = 100; i > 0; i--)
		number += i*i;

	for (int i = 100; i >= 0; i--)
		sum += i;
	sum = sum*sum;

	result = sum - number;
	cout << "result:  " << result << endl;

	system("pause");
	return 0;
	
	
}
