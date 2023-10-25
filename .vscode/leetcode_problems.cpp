// reverse an array
#include <iostream>
// #include <bits/stdc++.h>
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

/*void printarray(int arr2[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr2[i];
    }

}
int main()
{
    int arr[]={1,2,3,4,5};
    int arr2[5]={};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k =2;
    for (int i = 0; i < n; i++)
    {
        arr2[(i+k)%n] = arr[i];
    }



    printarray(arr2,n);
}*/

// check if array is sorted and rotated

/*int main()
{
    int arr[]={3,4,5,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i-1] > arr[i])
        {
            count++;
        }

    }
    if (arr[n-1] > arr[0])
    {
        count ++;
    }
    if (count <= 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

}*/

// Sum of 2 arrays
/*void sumofarrays(int arr1[], int arr2[], int arr3[], int n1, int n2){
    int sum = 0;
    int carry = 0;
    int i = n1-1, j = n2-1, k = n1-1;
    while(i >= 0 && j >= 0) {
        sum = arr1[i] + arr2[j] + carry;
        arr3[k] = (sum % 10);

        carry = sum / 10;

        k--;
        i--;
        j--;
    }
    while(i >= 0) {
        sum = arr1[i] + carry;
        arr3[k] = (sum % 10);

        carry = sum / 10;

        k--;
        i--;
    }
    while(j >= 0) {
        sum = arr2[j] + carry;
        arr3[k] = (sum % 10);

        carry = sum / 10;

        k--;
        j--;
    }
}
void printarray(int arr3[], int n1){
    for (int i = 0; i < n1; i++)
    {
        cout << " " << arr3[i];
    }

}
int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {5,6,7,8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[n1] = {};
    sumofarrays(arr1,arr2,arr3,n1,n2);
    printarray(arr3,n1);

}*/

// maximum occuring character
// char maxoccuring(string s)
// {
//     int count = 0, ans = 0;
//     char ch=s[0];
//     for (int i = 0; i < s.length(); i++)
//     {
    
//         count = 0;
//         for (int j = i + 1; j < s.length(); j++)
//         {
//             if (s[i] == s[j])
//             {
//                 count++;
//             }
//         }
//         if(ans<count){
//         ans = count;
//         ch=s[i];
//         }
      
//     }
//     return ch;
// }

// int main()
// {
//     char c = 33;
//     string s = "";
//     s = s + c + c;
//     cout <<c<<" " <<s<<maxoccuring(s) << endl;
// }



