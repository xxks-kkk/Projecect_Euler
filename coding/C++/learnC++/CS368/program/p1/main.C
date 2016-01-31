#include <fstream>
#include "prog1.h"

using namespace std;

int main(int numargs, char *args[]) {
  ifstream inFile;

  // make sure the file name was given as a command-line arg
  if (numargs < 2) {
    cerr << "usage: " << args[0] << " <file name>" << endl;
    exit(1);
  }

  // open the file
  inFile.open(args[1]);

  // make sure the open worked
  if (inFile.fail()) {
    cerr << "Unable to open " << args[1] << endl;
    exit(1);
  }

  StudentInfo Info[];
  int numStudents = 0;
  string id;
  double maxAv;

  numStudents = ReadStudents(inFile, Info);
  
  HighestAverage(Info, numStudents, id, maxAv);

  cout << Student << id << has the highest average: << maxAv;
}
