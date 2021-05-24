#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

//Riomh's Function
//==========
void pointless_function()
{
    cout << "Why did you run this? What are you doing? Idiot.\n";
}
//==========

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

    pointless_function();
    //============

    //westerns Code
    //============
      bool accept = false;
      cout << "be accepted in to the brother hood of B O N K";
      cin >> accept;

      if (accept == true) {
        cout << "then the sound of the holy bonk will echo through history";
      } else {
        cout >> "then begone with you heretic";
      }
    //============
}
