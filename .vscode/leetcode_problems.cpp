//reverse an array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void reverse(int arr[], int n){
//     for (int i = 0; i < n/2; i++)
//     {
//         swap(arr[i], arr[n - i - 1]);
//     }
    
// }

// void printarray(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout << " " << arr[i];
//     }
    
// } 

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     reverse(arr,n);
//     cout << "reversed array is - " ;
//     printarray(arr,n);
//     return 0;

// }


// merging 2 sorted arrays and creating a sorted array.
/*void merge(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3){
    if(n3 < n1 + n2) {
        return;
    }
    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        }
        else {
            arr3[k++] = arr2[j++];
        }
    }
    while(i < n1) {
        arr3[k++] = arr1[i++];        
    }
    while(j < n2) {
        arr3[k++] = arr2[j++];        
    }
}
void printarray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    
} 

int main(){
    int arr1[3] = {1,3,5};
    int arr2[2] = {2,4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = n1 + n2;
    int arr3[n3];
    merge(arr1, arr2, arr3, n1, n2, n3);
    cout << "merged array is - " ;
    printarray(arr3,n3);
    return 0;

}*/


// move zeroes
/*void printarray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    
} 
int main(){
    int arr[5]  =  {1,0,0,3,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int nonzero = 0; 

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[nonzero]);
            nonzero++;
        }
        
    }
    printarray(arr,n);

    

}*/


// Rotating arrays
