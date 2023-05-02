#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Quick Sort Algorithm
int partition(int arr[] , int x , int y)
{
    int p = arr[x];
    int i = x;
    int j = y;
    while(i < j)
    {
       do
       {
         i++;
       }while(arr[i] <= p);
       do
       {
           j--;
       }while(arr[j] > p);

       if(i < j)
       {
           swap(arr[i] , arr[j]);
       }
    }
    swap(arr[x] , arr[j]);
    return j;
}
void quicksort(int arr[] , int x , int y)
{
    if(x < y)
    {
        int pivot = partition(arr , x , y);
        quicksort(arr , x , pivot);
        quicksort(arr , pivot + 1 , y);
    }
}
void printarray(int arr[] , int sz)
{
    for(int i = 0; i <= sz - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
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
    quicksort(arr , 0 , temp);
    printarray(arr , temp);

    return 0;
}
