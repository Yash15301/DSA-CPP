#include<bits/stdc++.h>
using namespace std;

// TC O(N)
int maximum_subarray_sum(int arr[], int n)
{
    int cs = 0;
    int largest = 0;
    for(int i=0; i<n; i++)
    {
        cs =cs + arr[i];
        if(cs < 0)
        {
            cs = 0;
        }
        largest = max(largest, cs);
    }
    return largest;
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(n);
    cout << maximum_subarray_sum(arr, n);
    return 0;
}