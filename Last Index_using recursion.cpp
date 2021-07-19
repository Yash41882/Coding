/*Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns the last index at which M is found in the array and -1 if M is not found anywhere. Print the value returned.

Input Format
Enter a number N and add N more numbers to an array, then enter number M to be searched*/

#include<iostream>
using namespace std;
void lastindex(int arr[],int n,int key,int i,int &ans){
	if(n==i){
        if(arr[i]==key){
			ans=i;
		}
		return;
	}
	if(arr[i]==key){
		ans=i;
	}
	lastindex(arr,n,key,i+1,ans);

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
	int ans=-1;
	lastindex(arr,n-1,key,0,ans);
	cout<<ans;
	return 0;
}
