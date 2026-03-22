#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;

    cout<<"Enter size: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+n);

    int count = 1;

    for(int i=0;i<n;i++)
    {
        if(arr[i] == arr[i+1])
        {
            count++;
        }
        else
        {
            cout<<"["<<arr[i]<<","<<count<<"] ";
            count = 1;
        }
    }

    return 0;
}
