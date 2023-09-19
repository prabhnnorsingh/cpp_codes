// Finding minimum and maximum element in an array.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*int getMin(int arr[], int n)
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
}*/

// Printing the sum of the array.
/*int sum(int arr[], int n){
    int summ = 0;
    for(int i = 0; i < n; i++)
    {
        summ = summ + arr[i];
    }
    return summ;
}


int main() {
    cout << "enter the number of elements of the array" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "The sum of the array is : " << sum(arr,n) ;
}*/

/*void printarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
}
void alterswap(int arr[], int n){
    for(int i = 0; i < n; i=i+2)
    {
        if(arr[i] < n){
            swap(arr[i],arr[i+1]);
        }
    }
}


int main() {
    cout << "enter the number of elements of the array" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "The swapped array is: " << endl;
    alterswap(arr,n);
    printarr(arr,n) ;
}*/




/*int elements(int arr[], int n){
    int element = 0;
    for(int i = 0; i < n; i++)
    {
        for ( int j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j]){
            element = arr[i]; 
            }
        }
        
        
    }return element;
}

int duplicates(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        for ( int j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j]){
            count = count +1;
            }
        }
        
        
    }return count;
}


int main() {
    cout << "enter the number of elements of the array" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "The count of duplicate is: " << duplicates(arr,n) << endl;
    cout << "The duplicate is: " << elements(arr,n);
}*/



