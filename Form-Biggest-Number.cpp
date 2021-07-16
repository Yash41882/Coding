/*You are provided an array of numbers. You need to arrange them in a way that yields the largest value.

Input Format
First line contains integer t which is number of test case.
For each test case, you are given a single integer n in the first line which is the size of array A[] and next line contains n space separated integers denoting the elements of the array A /
Input:-
1
4
54 546 548 60
Output:-
6054854654
*/
#include<iostream>
#include <algorithm>
using namespace std;

bool compare(string x,string y)
{ 
	string x_y=x+y;
	string y_x=y+x;
	return x_y>y_x;
}

int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
		int n;
		cin>>n;
		string arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
        sort(arr,arr+n,compare);
		for(int i=0;i<n;i++)
		cout << arr[i];
		cout << endl;
	}
}
