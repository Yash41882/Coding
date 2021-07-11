/*You are given an array, A. Sort this array using counting sort algorithm.

Input Format
First line contains a single integer, n, denoting the size of the array. Next line contains n integers, denoting the elements of the array.  */

#include<iostream>
using namespace std;
int main()
 {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int count[1000001]={0};
	for(int i=0;i<n;i++)
	{
        count[arr[i]]++;
	}
	for(int i=0;i<1000000;i++)
	{
        int x=count[i];
		for(int j=1;j<=x;j++)
	    {
         cout<<i<<" ";
     	}
	}
	return 0;
}
