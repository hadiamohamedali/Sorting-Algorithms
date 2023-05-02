#include <iostream>
#include <bits/stdc++.h>
//Bubble Sort Algorthim
using namespace std;
void bubblesort(int arr[] , int sz)
{
   bool sorted = true; int counter = 0;
   for(int i = 0; i < sz- 1; i++)
   {
       for(int j = 0; j < sz- i - 1; j++)
       {
           if(arr[j] > arr[j + 1])
           {
               swap(arr[j] , arr[j + 1]);
               sorted = false;
           }
          counter++;
       }
       if(sorted == true)
        break;
   }
  cout<< "The Passes = " << counter << endl;
}
void printarray(int arr[] , int sz)
{
    for(int i = 0; i <= sz - 1; i++)
    {
        cout <<arr[i] << " ";
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
        cin >>arr[i];
    }
    bubblesort(arr , temp);
    printarray(arr , temp);//Array After Bubble Sort


    return 0;
}
