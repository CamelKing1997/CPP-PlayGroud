#include <iostream>
int main()
{
	int sum = 0;

	// sum values from 1 up to 10 inclusive
	for (size_t i = 0; i <= 10; i++)
	{
		sum += i;// equivalent to sum = sum + val
	}

	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

	return 0;
}