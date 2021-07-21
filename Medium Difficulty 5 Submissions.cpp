/* Take as input str, a string. Write a recursive function which moves all ‘x’ from the string to its end.
E.g. for “abexexdexed” return “abeedeedxxx”.
Print the value returned  */

#include<iostream>
#include <string>
using namespace std;
int main() {
    string word;
	cin>>word;
	int index;
    int size=word.length();
	for(int i=0;i<size;i++){
		if(word[i]=='x'){
	       index=i;
		for(int j=index;j<size-1;j++){
		    swap(word[j],word[j+1]);
		}
		}
	}
	cout<<word;
	return 0;
}
