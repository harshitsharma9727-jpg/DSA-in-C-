#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter sorted array elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Array after removing duplicates:\n";

    for(int i=0;i<n;i++)
    {
        if(arr[i] != arr[i+1])
        {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}
