#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n, k;
    cout<<"enter size: ";
    cin>>n;

    vector<int> nums(n);

    cout<<"enter elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    cout<<"Enter k: ";
    cin>>k;

    sort(nums.begin(), nums.end());

    long long sum = 0;
    int left = 0, maxFreq = 1;

    for(int right = 0; right < n; right++)
    {
        sum += nums[right];

        while((long long)nums[right] * (right - left + 1) - sum > k)
        {
            sum -= nums[left];
            left++;
        }

        int length = right - left + 1;
        if(length > maxFreq)
        {
            maxFreq = length;
        }
    }

    cout<<"maimum frequency: "<<maxFreq;

    return 0;
}
