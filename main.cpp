#include <iostream>
#include <cstdlib>
#include <ctime>


// i know sort of what this does but could use to learn more
// especiallyin big code bases, how are all the namespsaces
// coordinated and understood by the tons of people contributing
using namespace std;


// main function, where the action happens
int main()

{

  // not sure what this does
  // i think srand is a function that intakes another function
  // time is a function, i assume from the ctime library
  srand(time(0));

  // loop, the code i took this from is meant to show multiple
  // rolls, i editd the loop to run only once
  // for look takes 3 inputs, i as a counter, then the test to see
  // if the coutner has run to where it is desired, and the increment
  // for each loop
  for (int i = 0; i<1; i++)

    {

      // makes dice variable
      // not really sure what is heppening here
      int dice = (int) (1+rand()%6);

      // iostream function to print to screen
      cout << dice << endl;
    }

  // this is here since int main expects to retrun an interger
  // i think newer versions of c++ no longer require this though
  return 0;


  
}


/* ive never used the cstdlib or ctime library.  there are a million libraries out there
how did you learn what they all are and what they do?







 */
