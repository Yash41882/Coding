//Here in brute force method we will simply call 5 for loops and check for every possible case and compare the value to the key.
//We are calling a function named combine() to combine all individual values of for loop and then comparing it with key.

#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;


int combine(int a, int b, int c, int d, int e)
{
  //  int c;
    string s1 = to_string(a);
    string s2 = to_string(b);
    string s3 = to_string(c);
    string s4 = to_string(d);
    string s5 = to_string(e);


    string s = s1 + s2 + s3 + s4 + s5;


   // c = ;
    return stoi(s);
}


int main()
{
    system("CLS");
    int key, value;
     time_t start, end;
     // Start of time
     time(&start);
     ios_base::sync_with_stdio(false);
    cout<<"\nEnter the password/key = ";
    cin>>key;


    cout<<"\n-------Using Brute Force Method-------";


   // Brute force method by applying 5 for loops

    for (int a = 0; a <= 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            for (int c = 0; c <= 9; c++)
            {
                for (int d = 0; d <= 9; d++)
                {
                    for (int e = 0; e <= 9; e++)
                    {
                        value = combine(a, b, c, d ,e); // calling the function
                        if (value == key) // comparing it with key
                            cout<<"\nKey Found! Key is = "<<value;
                    }
                }
            }
        }
    }
    
    time(&end); // end of time
    // Calculating time taken
    double time_taken = double(end - start);
    cout << "\nExecution Time : " << fixed << time_taken << setprecision(5);
    cout << " ms " << endl;
    return 0;
}
