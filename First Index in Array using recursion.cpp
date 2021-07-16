/*Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns the first index at which M is found in the array and -1 if M is not found anywhere. Print the value returned.

Input Format
Enter a number N and add N more elements to an array, then enter a number M

Constraints
None

Output Format
Display the first index at which number M is found

Sample Input
5
3
2
1
2
2
2
Sample Output
1*/

#include<iostream>
using namespace std;
int firstindex(int arr[],int n,int i,int key)
{       
		if(n==i)
		{
			return -1;
		}
	
			if(arr[i]==key)
			{
				return i;
			}
          return firstindex(arr,n,i+1,key);
		 
}
int main() {
	int n;
	cin>>n;
    int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key;
	cin>>key;
	cout<<firstindex(arr,n-1,0,key);
	return 0;
}
