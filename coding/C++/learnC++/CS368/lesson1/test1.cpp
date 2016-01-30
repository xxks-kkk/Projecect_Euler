// Write a C++ program that uses a loop to sum the numbers from 1 to 10 and prints the result like this:

// The sum is: xxx

// Note: Use variable declarations, and a for or while loop with the same syntax as in Java.
  

#include <iostream>

using namespace std;

int main()
{
  int sum=0;
  for (int i = 1; i < 11; i++)
  {
    sum += i;
  }
  cout << "The sum is: " << sum << endl;
  return 0;
}
