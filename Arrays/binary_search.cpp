// works on sorted arrays
// search space should be monotonic(non decreasing or non increasing)
#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[], int n, int key)
{
    int s=0; 
    int e=n-1;

    while(s<=e)
    {
        int mid = (s+e)/2;
        if(a[mid] == key)
        {
            return mid;
        }
        else if(a[mid] > key)
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    return -1;
}
int main()
{
    int a[] = {1,2,10,11,19,29,30};
    int n = sizeof(a)/sizeof(int);
    int key;
    cin >> key;
    int index = binary_search(a,n,key);
    if(index!=-1)
    {
        cout <<key<< " is present at index " << index << endl;
    }
    else
    {
        cout << key << " NOT FOUND!" << endl;
    }
    return 0;
}