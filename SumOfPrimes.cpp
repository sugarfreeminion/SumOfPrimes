#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstring>
#include <string>
#include <sstream>
#include <stdlib.h>

using namespace std;

/* Function Name: IsPrime
 * Input: number to check primeness off_type
 * Output: bool isPrime, true if prime, false otherwise
 * Description: Determines if a number is a prime number
 */
bool IsPrime(int n)
{
	bool isPrime = true;
	
	if(n == 2)
	{
		isPrime = true;
	}
	else if(n == 3)
	{
		isPrime = true;
	}
	else if(n % 2 == 0)
	{
		isPrime = false;
	}
	else if(n % 3 == 0)
	{
		isPrime = false;
	}
	else
	{
		int i = 3;
		int sqrtOfN = sqrt(n);
		
		while(i <= sqrtOfN)
		{
			if(n % i == 0)
			{
				isPrime = false;
			}
			i = i + 2;
		}
	}
	
	return isPrime;
}

int main()
{
	// looking for 1000 prime numbers
	const int MAX = 1000;
	
	// prime numbers start at 2
	int index = 2;
	
	//the number of prime numbers found
	int primeIndex = 0;
	
	int tempSum = 0;
	
	while(primeIndex < MAX)
	{
		if(IsPrime(index) == true)
		{
			++primeIndex;
			tempSum = tempSum + index;
		}
		
		++index;
	}
	
	cout << tempSum;
	
	return 0;
}