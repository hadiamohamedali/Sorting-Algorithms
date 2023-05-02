#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Selection Sort Algorthim
void selectionsort(int arr[] , int sz)
{
    int mn;
    for(int i = 0; i < sz - 1; i++)
    {
        mn = i;
        for(int j = i + 1; j < sz; j++)
        {
            if(arr[j] < arr[mn])
            {
                mn = j;
            }
        }
        if(mn  != i)
        {
            swap(arr[mn] , arr[i]);
        }
    }
}
void printarray(int arr[] , int sz)
{
    for(int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int sz; cin >> sz;
    int arr[sz];
    int temp = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i <= sz - 1; i++)
    {
        cin >> arr[i];
    }
    selectionsort(arr , temp);
    printarray(arr , temp);
    return 0;
}
