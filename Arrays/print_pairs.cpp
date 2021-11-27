#include<bits/stdc++.h>
using namespace std;

void printAllPairs(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int x = arr[i];
        for(int j=i+1; j<n; j++) // or j starts from 0 and it will make all possible pairs with all elements  
        {
            int y = arr[j];
            cout << x <<"," << y << endl;
        }
        cout << endl;
    }

}
int main()
{
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(n);
    printAllPairs(arr,n);
    return 0;
}