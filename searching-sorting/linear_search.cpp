// Linear search

#include <iostream>
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
}


