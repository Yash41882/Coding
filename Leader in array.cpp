/*Ques:Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2.

Input Format
First line contains size of the array.
Second line contains the elements of the array.*/

#include <bits/stdc++.h> 
using namespace std;
int main () {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int temp[n],p;
	for(int i=0;i<n;i++)
	{
		bool a=true;
		for(int j=i+1;j<n;j++)
		{
            if(arr[i]<arr[j])
			{
               a=false;
			   break;
			}
		}
		if(a)
		{
			temp[p++]=arr[i];
		}
	}
   sort(temp,temp+p);
   for(int i=0;i<p;i++)
   {
	   cout<<temp[i]<<" ";
   }
	return 0;
}
