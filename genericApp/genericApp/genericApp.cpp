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

    cout << "\nI'm sorry, that was rude, you're not an idiot. But seriously though, what was the point of this function?\n";
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
      cout << "be accepted in to the brotherhood of B O N K";
      cin >> accept;

      if (accept == true) {
        cout << "\nthen the sound of the holy bonk will echo through history";
      } else {
        cout >> "\nthen begone with you heretic";
      }

      cout << "The FitnessGram Pacer Test is a multistage aerobic capacity test that progressively gets more difficult as it continues. The 20 meter pacer test will begin in 30 seconds. Line up at the start. The running speed starts slowly but gets faster each minute after you hear this signal bodeboop. A sing lap should be completed every time you hear this sound. ding Remember to run in a straight line and run as long as possible. The second time you fail to complete a lap before the sound, your test is over. The test will begin on the word start. On your mark. Get ready!… Start.";
    //============


}
