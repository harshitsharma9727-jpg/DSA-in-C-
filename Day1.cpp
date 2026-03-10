#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "enter elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "largest elment is: " << largest;

    return 0;
}
