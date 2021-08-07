#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, key = 0, index = 0;
    cout<<"\nEnter the size of Array = ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the Elements in Array = ";
    for(int i = 0 ; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"\nEnter the Element to search = ";
    cin>>key;
    
    index = LinearSearch(arr, n , key);

    if(index != -1)
    {
        cout<<"\nElement "<<key<<" is found at the position = "<<index+1;
    }
    else
    {
        cout<<"\nElement "<<key<<" is not found"; 
    }

    return 0;
}