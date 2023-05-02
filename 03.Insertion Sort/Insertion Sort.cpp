#include <iostream>
#include <bits/stdc++.h>
//Insertion Sort Algorithm
using namespace std;
void insertionsort(int arr[] , int sz)
{
    int temp , y;
    for(int i = 1; i < sz; i++)
    {
        temp = arr[i];
        y = i - 1;
        while(y >= 0 && arr[y] > temp)
        {
            arr[y + 1] = arr[y];
            y = y - 1;
        }
        arr[y + 1] = temp;
    }

}
void printarray(int arr[] , int x)
{
    for(int i = 0; i <= x - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int sz; cin >> sz;
    int arr[sz];
    int xx = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i <= sz - 1; i++)
    {
        cin >> arr[i];
    }
    insertionsort(arr , xx);
    printarray(arr , xx);

    return 0;
}
