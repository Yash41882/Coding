/* Guven a string,print its permutation 
eg:- abc
output:- abc acb bca cab cba */


#include <iostream>
using namespace std;
void permutation(char word[],int i){
    if(word[i]=='\0'){
        cout<<word<<" ";
        return;
    }
    for(int j=i;word[j]!='\0';j++){  
        swap(word[i],word[j]);
        permutation(word,i+1);
        swap(word[i],word[j]);
    }
}
int main() {
    char word[100];
    cin>>word;
    permutation(word,0);
    return 0;
}
