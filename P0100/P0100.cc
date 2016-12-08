////// Brute Force solution to Problem 100, ick, but it works.

#include <iostream>

int collatz(int inputMin, int inputMax)

{
	int maxCycleLength = 0;
	if(inputMin > inputMax)
	{
		int temp = inputMin;
		inputMin = inputMax;
		inputMax = temp;
	}//if

	for(int i = inputMin; i <= inputMax; i++)
	{
		int j = i;
		int length = 1;
		while(j >= 2)
		{
			if(j%2 == 0)
				j /= 2;
			else
				j = 3*j + 1;
			length++;
		}//while
		if(length > maxCycleLength)
			maxCycleLength = length;
	}//for, outer
	return(maxCycleLength);
}//int::collatz(int)

/////////////////////////////////

int main()
{
	int a,b;
	while(std::cin >> a >> b)
		std::cout << a << " " << b << " " << collatz(a,b) << std::endl;
}//main()
