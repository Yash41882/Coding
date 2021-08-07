#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0, end = (n-1);   
    while(start <= end)
    {
        int mid = (start + end) / 2;
        
        if(arr[mid] == key)
        {
            return mid;
        }

        else if(arr[mid] > key)
            {
                end = mid-1;
            }

            else
            {
                start = mid + 1;
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
    
    index = BinarySearch(arr, n , key);

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