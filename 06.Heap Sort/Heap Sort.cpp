#include <iostream>
#include <bits/stdc++.h>
//Heap Sort Algorithm
using namespace std;
void heapify(int arr[] , int x , int i)
{
    int left = 2 * i + 1;
    int right = 2 *i + 2;
    int mx = i;
    if(left < x && arr[left] > arr[mx])
    {
        mx = 1;
    }
    if(right < x && arr[right] > arr[mx])
    {
        mx = right;
    }
    if(mx != i)
    {
        swap(arr[i] , arr[mx]);
        heapify(arr , x , mx);
    }
}
void buildHeap(int arr[] , int x)
{
    for(int i = x / 2 - 1; i >= 0; i--)
    {
        heapify(arr , x, i);
    }
}
void heapsort(int arr[] , int x)
{
    buildHeap(arr , x);
    for(int i = x - 1; i >= 0; i--)
    {
        swap(arr[0] , arr[i]);
        heapify(arr , i , 0);
    }
}
void printarray(int arr[] , int sz)
{
    for(int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int sz; cin >> sz;
    int arr[sz];
    int t = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i <= sz - 1; i++)
    {
        cin >> arr[i];
    }
    heapsort(arr , t);
    printarray(arr , t);
    return 0;
}
