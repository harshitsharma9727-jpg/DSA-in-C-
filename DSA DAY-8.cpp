#include<iostream>
using namespace std;

int main()
{
    int n, temp, digit, sum = 0;

    cout<<"enter a 3-digit number: ";
    cin>>n;

    temp = n;

    while(temp > 0)
    {
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }

    if(sum == n)
    {
        cout<<"arm strong Number";
    }
    else
    {
        cout<<"not an Arm strong Number";
    }

    return 0;
}
