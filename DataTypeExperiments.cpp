//Joshua Ponte
//Skills portfolio 1 - Exercise 1 - 25/10/2018
//A program that ...

////THIS IS NOT ACTUALLY A SUBMISSION TO THE SKILLS PORTFOLIO
////This is me experimenting with a consistent opening comment

//Include external libraries/header files
#include <iostream>
#include <string>
using namespace std;

//Main function
int main() {
  int num1 = 100;
  long num2 = 100;
  unsigned short num3 = 65537; //Wraps around to 1 as an unsigned short can only store 0-65535
  unsigned long long num4 = 18446744073709551616; //Wraps around to 0 as an unsigned long long can only store 0-18446744073709551615
  cout << num3 << endl << num4;

  // system("pause");
  return 0;
}
