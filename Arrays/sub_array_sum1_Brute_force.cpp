#include<bits/stdc++.h>
using namespace std;

// Brute force approach 
//Time complexity O(N^2)
int largestSubArraySum(int arr[], int n)
{
    int largest_sum = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            int subArraySum = 0;
            for(int k=i; k<=j; k++)
            {
                //cout << arr[k] << " , ";
                subArraySum += arr[k];
            }
            //cout << endl;
            largest_sum = max(largest_sum, subArraySum);
        }
    }
    return largest_sum;
}
int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    cout << largestSubArraySum(arr,n);
    return 0;
}