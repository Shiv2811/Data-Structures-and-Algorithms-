//Binary Search

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low=0;
    high=size-1;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

void display(int arr[], int size)
{
    for (int i = 0; i <=size-1; i++)
    {
      cout<<arr[i];
      cout<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    int element;
    cout<<"Enter the element to be found : ";
    cin>>element;
    cout<<"Displaying array ";
    display(arr, size);
    cout<<"Performing Binary Search: "<<endl;
    int foundIndex=binarySearch(arr,size,element);
    cout<<"The element "<<element<< " was found at index "<<foundIndex<<endl;
    return 0;
}