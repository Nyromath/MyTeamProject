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

    //westerns Code
    //============
      bool accept = false;
      cout << "be accepted in to the brotherhood of B O N K";
      cin >> accept;

      if (accept == true) {
        cout << "\nthen the sound of the holy bonk will echo through history";
      } else {
        cout >> "\nthen begone with you heretic";
      }
    //============


}
