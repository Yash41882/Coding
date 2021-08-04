/*Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save.

Explanation for the Sample input Testcase:
Elevation Map

So the total units of water she can save is 5 units

Input Format
First line contains an integer n. Second line contains n space separated integers representing the elevation map.

Constraints
1 <= N <= 10^6

Output Format
Print a single integer containing the maximum unit of waters she can save.

Sample Input
10
0 2 1 3 0 1 2 1 2 1
Sample Output
5   */

#include<iostream>
#include<climits>
using  namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l[n],r[n];  
    l[0]=a[0];
    for(int i=1;i<n;i++) 
    {  
        l[i]=max(l[i-1],a[i]);
    }
    r[n-1]=a[n-1];
     for(int i=n-2;i>=0;i--)
    {  
        r[i]=max(r[i+1],a[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
           int z;
           z=min(l[i],r[i]);
           ans =ans + z-a[i];
    }
    cout<< ans <<endl;
return 0;
}
