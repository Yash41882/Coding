#include<iostream>
using namespace std;
void innerloop(int arr[],int i,int e)
{
	if(i==e)
	{
		return;
	}
	if(arr[i]>arr[i+1]) {
    swap(arr[i],arr[i+1]);
	}
	innerloop(arr,i+1,e);
}
void recbubble(int arr[],int i,int n)  // i is current itertaion number
{
    if(i==n-1)
	{
		return;
	}
	else
	{  
		innerloop(arr,0,n-1-i);
	    return recbubble(arr,i+1,n);
	}
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
      cin>>arr[i];
	}
	recbubble(arr,0,n);
	for(int i=0;i<n;i++)
	{
      cout<<arr[i]<<" ";
	}
	return 0;
}
