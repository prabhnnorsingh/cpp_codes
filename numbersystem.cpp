/*Binary to decimal*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a binary number" << endl;
    cin >> n;
    int ans = 0;
    int r = 0;
    int i = 0;
    int val = 1;
    while (n>0)
    {
        r = n%10;
        n = n/10;
        ans = (r*val) +ans;
        val = val * 2;
    }
    cout << "The decimal number is - " << ans;
    
}