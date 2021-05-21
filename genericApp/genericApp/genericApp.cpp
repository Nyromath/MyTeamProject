#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    //Riomh's Code
    //============
    int bottles, i;
    cout << "How many bottles?\t";
    cin >> bottles;

    for (i = bottles; i > 0; i--) {
        cout << i << " bottles of beer on the wall, " << i << " bottles of beer. Take one down, drink it down, " << i - 1 << " bottles of beer on the wall\n";
    }
    //This is an extra comment from Riomh
    //============
}