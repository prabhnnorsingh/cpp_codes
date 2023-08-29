#include <iostream>
using namespace std;

int main(){
    int f;
    cout << "Enter fahrenheit value" << endl;
    cin >> f;

    int c = (5.0/9) * (f-32);
    cout << c << endl;
}