#include <iostream>
using namespace std;

static bool isPrime(int n)
{
	for (int i = 2; i <= n / 2; i++)
	{
		if ((n % i) == 0)
			return false;
	}
	return true;
}

unsigned int getPrime(int value)
{
	int sum = 0;
	for (int i = 3; i < value; i++)
	{
		if (isPrime(i) && (i % 3 == 0 || i % 5 == 0))
		{
			sum += i;
		}
	}
	return sum;
}

int main()
{
	int n = 0;
	cout << "Enter the number: ";
	cin >> n;
	cout << getPrime(n);
}
