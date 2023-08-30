#include <iostream>
using namespace std;

int main(){
    int n ;
    cout << "enter the number of rows" << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j<=n)
        {
            cout << "*";
            j += 1;
        }
        cout << endl;
        i +=1;   
    }
    
}