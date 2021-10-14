// This programs counts number of even number among the 4 number.

#include <stdio.h>
using namespace std;

int CountEvens(int num1, int num2, int num3, int num4)
{
	//here we are storing the numbers in array so that we can iterate through then and write less lines of code
	int arr[] = {num1, num2, num3, num4};
	// int Count is used to count the even numbers.
	int count = 0 ;

	//Using for loop to iterate through array and check whether the numbers are even or not.
	for (int i = 0; i < 4; i++)
	{
		// using if condition if the number if even it will increment the count variable
		if (arr[i] % 2 == 0)
			count++;
	}
	return count;
}

int main()
{
	int n1, n2, n3, n4;
	printf("\nEnter 4 Integer numbers = ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	printf("\nTotal Even Numbers = %d", CountEvens(n1, n2, n3, n4));
	return 0;
}
