/*Ques:Take as input str, a string. We are concerned with all the possible subsequences of str. E.g.

a. Write a recursive function which returns the count of subsequences for a given string. Print the value returned.

b. Write a recursive function which prints all possible subsequences for a “abcd” has following subsequences  abcd abc abd ab acd ac ad a bcd bc bd b cd c d  .given string (void is the return type for function).
Note: Use cin for input for C++ */

sol:
#include<iostream>
using namespace std;
void subsequence(char arr[],int i,char out[],int j){
	//i is index for which we are taking decision i.e. to add it or not
	//j is index tells you the position where you add element in current sub
	if(arr[i]=='\0'){
		out[j]='\0';
		cout<<out<<" ";
		return;
	}
	//take decision for i-th char
	//case 1: include it
	out[j]=arr[i];
	subsequence(arr,i+1,out,j+1);
	//case 2
	subsequence(arr,i+1,out,j);
	
}
int main() {
	char a[100];
	cin>>a;
	//int size=strlen(a);
	char out[100];
	//calling of a function
	subsequence(a,0,out,0);
	return 0;
}
