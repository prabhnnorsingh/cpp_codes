#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows u want?" <<endl;
    cin >> n;

    int i = 1;
    int k = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout << k;
            j = j+1;
            k = k+1;
        }
        cout << endl;
        i = i+1;
        
    }
    
}