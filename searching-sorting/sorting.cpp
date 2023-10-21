//Sorting

 //Selection Sort

  
/* #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
// Function to sort array
 void selectionsort(int arr[], int n)
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
}*/



// Bubble Sort

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[], int n)
{
	int i, j;
	bool swapped;
	for (i = 1; i < n; i++) {
		swapped = false;
		for (j = 0; j < n - i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}

		if (swapped == false)
			break;
	}
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << " " << arr[i];
}


int main()
{
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int N = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}*/


// Insertion Sort

/*
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int N){
    for (int i = 1; i < N; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
            
            
        }
        arr[j+1] = temp;
        
    }
    

}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << " " << arr[i];
}

int main(){
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int N = sizeof(arr) / sizeof(arr[0]);
	insertionsort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;



