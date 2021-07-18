/*Take as input N, the size of array. Take N more inputs and store that in an array. Write a recursive function which returns true if the array is sorted and false otherwise. Print the value returned.

Input Format
Enter a number N and take N more inputs and store in an array*/

#include<iostream>
using namespace std;
bool issorted(int arr[],int n)
{
		if(n==0||n==1)
		{
			return true;
		}
	
			if(arr[n-1]<arr[n-2])
			{
				return false;
			}
          return issorted(arr,n-1);
		 
}
int main() {
	int n;
	cin>>n;
    int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(issorted(arr,n))
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}


	return 0;
}
