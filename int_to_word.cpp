//This code prints the word value of an integer

#include<iostream>

using namespace std;

void word(string s[], int n)
{
    if(n==0)
    {
        return;
    }

    word(s,n/10);
    
    cout<<s[n%10]<<"\t";
    

}

int main()
{
    string s[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"\nEnter a number = ";
    cin>>n;

    word(s,n);

    return 0;

}
