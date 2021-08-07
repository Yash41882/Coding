#include<iostream>
using namespace std;

int ReverseArray(int arr[], int n)
{
    int start = 0, end = n-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start+=1;
        end-=1;
    }
    return 0;
}

int Print_Array(int arr[], int n)
{
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\t"<<arr[i];
    }
    return 0;
}

int Input_Array(int arr[], int n)
{
    cout<<"\nEnter the Elements in Array = ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    return 0;
}

int main()
{
    int n;
    cout<<"\nEnter the size of Array = ";
    cin>>n;
    int arr[n];

    Input_Array(arr,n);

    Print_Array(arr,n);

    ReverseArray(arr, n);

    Print_Array(arr,n);


    return 0;
}