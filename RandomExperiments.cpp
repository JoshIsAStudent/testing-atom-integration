//Joshua Ponte
//Skills portfolio 1 - Exercise 1 - 25/10/2018
//A program that ...

////THIS IS NOT ACTUALLY A SUBMISSION TO THE SKILLS PORTFOLIO
////This is me experimenting with a consistent opening comment

//Include external libraries/header files
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

//Main function
int main() {
  srand(time(NULL));
  int x = rand() % 100 + 1; //Generate a number in the range 1 to 100
  cout << x;

  // system("pause");
  return 0;
}
