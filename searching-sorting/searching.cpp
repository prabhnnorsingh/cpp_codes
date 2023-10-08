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


// Painters problem

/*#include <iostream>
using namespace std;

bool ispossible(int arr[],int n,int m,int mid)
{
    int paintersum = 1;
    int totalunits = 0;
    for (int i = 0; i < n; i++)
    {
        if (totalunits + arr[i] <= mid)
        {
            totalunits += arr[i];
        }
        else
        {
            paintersum ++;
            if (paintersum > m || arr[i]>mid)
            {
                return false;
            }
            totalunits = arr[i];
            
        }
    }
    return true;
    
}

int mintimeallocated(int arr[],int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int e = sum;
    int ans = -1;      
    while (s<e)
    {
        int mid = s + ((e-s)/2);    // (s + e)/2;
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid +1;
        }    
    }
    return ans;
    
}

int main()
{
    int arr[]={5,5,5,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2;
    cout << "Minimum time needed is : " << mintimeallocated(arr,n,m) << endl;
}*/





 