// Linear search

/*#include <iostream>
using namespace std;

int linearsearch(int arr[],int n ,int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        
    }
    
}

int main(){
    cout << "Enter the number of elements of array" << endl;
    int n;
    cin >> n;
    cout << "Enter the elements of array" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you want to search" << endl;
    int key;
    cin >> key;

    cout << "The index of the element is:-" << linearsearch(arr, n, key);
}*/


// Binary search

/*#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + ((end - start)/2);      // It is same as (start + end)/2
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] << key)
        {
            start = mid + 1;
        }

        if (arr[mid] >> key)
        {
            end = mid - 1;
        }

        else
        {
            return -1;
        }
        mid = start + ((end - start)/2);
          
    }
    
}


int main() {
    cout << "Enter the number of elements of array:-" << endl;
    int size;
    cin >> size;
    cout << "Enter the elements of array:-" << endl << "Please enter the array in Ascending or Descending order" << endl;;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you want to search:-" << endl;
    int key;
    cin >> key;

    cout << "The index of the element is: " << binarysearch(arr, size, key);
}*/