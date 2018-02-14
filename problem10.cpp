#include <iostream>

using namespace std;

int prime(int num) {
 
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main()
{
	long long int a, b, c, d, sum=0;
	a=2000000;

	for (b = 2; b < a; b++)
	{
		if (prime(b) == 1) sum += b;
	}
	cout <<"result:  "<< sum << endl;

	system("pause");
	return 0;
}
