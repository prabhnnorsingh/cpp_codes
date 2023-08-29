#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter a number:-" << endl;
    cin >> x;

    if (x%2==0)
    {
        cout << "The number is even" << endl;
    }
    else
    {
        cout << "The number is odd" << endl;
    }
}