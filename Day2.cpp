#include <iostream>
using namespace std;

int main()
{
    int x, original, reverse = 0;
    cout << "enter number: ";
    cin >> x;

    original = x;

    while(x > 0)
    {
        int digit = x % 10;
        reverse =reverse * 10 + digit;
        x = x / 10;
    }

    if(original == reverse)
        cout << "true";
    else
        cout << "false";
    return 0;
}
