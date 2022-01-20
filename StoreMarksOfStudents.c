#include<stdio.h>
using namespace std;

// A structure to save details of students
struct Marks
{
	// Character Array to store names
	char name[20];
	// Integer type variable to store marks
	int Score1, Score2, Score3, Score4, Score5;
};

// Driver Code
int main()
{
	int n;
	// Taking input from user, total number of students
	printf("\nEnter the number of Students = ");
	scanf("%d",&n);

	// Creating structure object of array type of size n
	Marks s[n];

	// Taking input about details of students
	printf("\nEnter the details of Students = ");

	// Intializing for loop from 0 to n to store details
	for(int i=0; i<n; i++)
	{
		printf("\n\n  Enter Name : ");
		scanf("%s", s[i].name);

		printf("  Enter Marks of Test-1 : ");
		scanf("%d", &s[i].Score1);

		printf("  Enter Marks of Test-2 : ");
		scanf("%d", &s[i].Score2);

		printf("  Enter Marks of Test-3 : ");
		scanf("%d", &s[i].Score3);

		printf("  Enter Marks of Test-4 : ");
		scanf("%d", &s[i].Score4);

		printf("  Enter Marks of Test-5 : ");
		scanf("%d", &s[i].Score5);
	}

	int highest, lowest;
	float avg_marks, highest_marks=-99999, lowest_marks=99999;

	// For loop from 0 to n to calculate average marks of each students
	for(int i=0; i<n; i++)
	{
		avg_marks = (float) (s[i].Score1 + s[i].Score2 + s[i].Score3 + s[i].Score4 + s[i].Score5) / 5;

		// If aeverage marks is greater than highest marks
		if (avg_marks > highest_marks)
		{
			// Updating details of highest marks
			highest = i;
			highest_marks = avg_marks;
		}

		// If aeverage marks is smaller than lowest marks
		if (avg_marks < lowest_marks)
		{
			// Updating details of lowest marks
			lowest = i;
			lowest_marks = avg_marks;
		}
	}

	// Printing details of Student with highest marks
	printf("\nStudent with Highest Average Marks");
	printf("\n Name of Student : %s \n Average marks = %f ", s[highest].name, highest_marks);

	// Printing details of Student with lowest marks
	printf("\nStudent with Lowest Average Marks");
	printf("\n Name of Student : %s \n Average marks = %f ", s[lowest].name, lowest_marks);

	return 0;
}
