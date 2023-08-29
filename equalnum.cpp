#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout << "Enter 2 numbers!!" <<endl;
    cin >> a >> b;

    if (a == b)
    {
        cout << "Hey the two numbers are same." << endl;
    } 
    
    else {
        if (a>b)
        {
            cout << "a is greater than b" << endl;
        }
        else
        {
            cout << "a is less than b" << endl;
        }
        
    }       
}