// Write a C++ program that includes two functions:

// function Compare has 3 parameters: 2 input streams and 1 output stream. The function reads the characters from each of the two inputs. If the sequences of characters are exactly the same, it writes "equal" to the output stream; otherwise, it writes "not equal".

// function main opens the files "Input1" and "Input2" for reading (giving an appropriate error message and quitting if either open fails), then calls Compare, passing the two input files as well as the standard output. 

# include <iostream>
# include <fstream>
# include <stdlib.h>

using namespace std;

void Compare( istream & input1, istream & input2, ostream & output);

int main()
{
  ifstream in1, in2;
  in1.open("Input1");
  if (in1.fail())
    {
      cerr << "Unable to open file Input1 for reading" << endl;
      exit(1);
    }
  in2.open("Input2");
  if (in2.fail())
    {
      cerr << "Unable to open file Input2 for reading" << endl;
      exit(1);
    }
  Compare(in1, in2, cout);
  return 0;
}

void Compare( istream & input1, istream & input2, ostream & output)
{
  char c1,c2;
  while (input1.get(c1))
    {
      if (!input2.get(c2) || (c1 != c2))
	{
	  output << "not equal";
	  return;
	}
    }

  // here when no more characters in input1
  // input files are the same iff there are also no more characters in input2
  if (!input2.get(c2))
    {
      output << "equal";
    }
  else
    {
      output << "not equal";
    }
}

