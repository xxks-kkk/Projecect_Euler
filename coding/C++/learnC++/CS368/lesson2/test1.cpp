// Write a C++ program that uses a loop to sum ten numbers read from the standard input, and then writes the sum to the standard output. 

# include <iostream>

using namespace std;

int main()
{
  int cnt = 0;
  int sum = 0;
  int x;
  while (cin >> x && cnt < 9)
    {
      sum += x;
      cnt++;
    }
  cout << "Sum: " << sum;
}
