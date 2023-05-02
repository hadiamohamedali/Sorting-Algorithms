#include <iostream>
#include <bits/stdc++.h>
//Merge Sort Algorithm
using namespace std;
void merge(int arr[] , int left , int middle , int right)
{   int k , i , j;
    int x1 = middle - left + 1;
    int x2 = right - middle;
    int *l = new int[x1] , *r = new int[x2];

    for(int i = 0; i < x1; i++)
    {
        l[i] = arr[left + i];
    }
    for(int j = 0; j < x2; j++)
    {
        r[j] = arr[middle + 1 + j];
    }
    i = j = 0;
    k = left;
    while(i < x1 && j < x2)
    {
        if(l[i] <= r[j])
        {
            arr[k] = l[i];
            i++;
        }
        else
        {
            arr[k] = r[j];
            j++;
        }
        k++;
    }
    while(i < x1)
    {
        arr[k] = l[i];
        i++;
        k++;
    }
    while(j < x2)
    {
        arr[k] = r[j];
        j++;
        k++;
    }

}
void mergesort(int arr[] , int left , int right)
{
    if(left < right)
    {
        int middle = left + (right - 1) / 2;
        mergesort(arr , left , middle);
        mergesort(arr , middle + 1 , right);

        merge(arr , left , middle , right);
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
   int q = sizeof(arr) / sizeof(arr[0]);
   for(int i = 0; i <= sz - 1; i++)
   {
       cin >> arr[i];
   }
   mergesort(arr , 0 , q - 1);
   printarray(arr , q);












    return 0;
}
