/*Binary to decimal*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a binary number" << endl;
    cin >> n;
    int ans = 0;
    int pv = 1;
    int r = 0;
    while (n>0)
    {
        r = n%2;
        n = n/2;
        ans = ans + (r*pv);
        pv = pv* 2;
    }
    cout << "The decimal number is - " << ans;
    
}