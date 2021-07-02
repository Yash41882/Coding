/* Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns an array containing indices of all items in the array which have value equal to M. Print all the values in the returned array.

Input Format
Enter a number N(size of the array) and add N more numbers to the array Enter number M to be searched in the array

Constraints
1 <= Size of array <= 10^5  */

#include<iostream>
using namespace std;
void printindex(int arr[],int n,int key,int i)
{
	if(n==i){   
		if(arr[i]==key){
			cout<<i;
		}
		return;
	}
	if(arr[i]==key){
			cout<<i<<" ";
		}
	printindex(arr,n,key,i+1);

}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	printindex(arr,n-1,key,0);
	return 0;
}
