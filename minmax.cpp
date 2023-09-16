// Finding minimum and maximum element in an array.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = min(res, arr[i]);
    return res;
}
  
int getMax(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = max(res, arr[i]);
    return res;
}

int main(){
    cout << "enter the number of elements of the array" << endl;
    int n;
    cin >> n;
    int arr[n];
    // int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Minimum element of array: " << getMin(arr, n)
         << endl;
    cout << "Maximum element of array: " << getMax(arr, n);
    return 0;
}