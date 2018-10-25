//Joshua Ponte
//Skills portfolio 1 - Exercise 1 - 25/10/2018
//A program that ...

////THIS IS NOT ACTUALLY A SUBMISSION TO THE SKILLS PORTFOLIO
////This is me experimenting with a consistent opening comment

//Include external libraries/header files
#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
using namespace std;

//Main function
int main() {

  //Random numbers
  srand(time(NULL));
  int x = rand() % 100 + 1; //Generate a number in the range 1 to 100
  cout << x << "\n";

  //Input string with spaces
  // string name;
  // getline( cin , name );
  // cout << name;

  //Numbers and stuff
  int y = 10;
  double z = (double)y/3;
  for (int i = 0; i < 5; i++) {
    cout << fixed << setprecision(i);
    cout << z << "\n";
  }
  cout << endl;

  //Letters and stuff
  string str = "This is a test";
  cout
  << isdigit('a') << '\n'
  << isdigit('1') << '\n'
  // << isdigit("ab") << '\n'
  // << isdigit("a1") << '\n'
  << str.length() << '\n'
  << toupper('a') << '\n'
  << toupper('A') << '\n'
  // << isdigit("Test") << '\n'
  << "Hello World!"[1] << '\n';
  cout << endl;

  char a = 'a';
  a = toupper(a);
  cout << a << '\n';

  // system("pause");
  return 0;
}
