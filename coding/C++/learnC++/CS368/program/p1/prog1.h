#include <string>
#include <fstream>

const int NUMGRADES = 5;

struct StudentInfo {
  string id;
  int grades[NUMGRADES];
  double avGrade;
};

int ReadStudents(istream &input, StudentInfo Info[]);

void HighestAverage(StudentInfo Info[], int numStudents, string &id, double &maxAv);
