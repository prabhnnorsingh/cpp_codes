//Sorting

 //Selection Sort

  
 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
// Function to sort array
 int selectionsort(int arr[], int n)
 {
    for (int i = 0; i < n-1; i++)
    {
        int minindex = i;

        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }    
            if (minindex != i)
            { 
        
                swap(arr[minindex], arr[i]);
            }    
    }
 }
// Function to print an array
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
        cout << endl;
    }
}
 

int main()
{
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function Call
    selectionsort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}