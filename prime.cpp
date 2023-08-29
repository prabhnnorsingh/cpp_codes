#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number to check prime or not" << endl;
    cin >> n;

    int d = 2;
    bool divided = false;
    while (d<n)
    {
        if (d%n == 0)
        {
            cout << "THE NUMBER IS NOT A PRIME NUMBER" << endl;
            divided = true;
        }
        d = d+1;
    }
    if (!divided)
    {
        cout << "THE NUMBER IS A PRIME NUMBER" << endl;
    }   
}