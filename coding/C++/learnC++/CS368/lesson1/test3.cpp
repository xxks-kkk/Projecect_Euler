// Assume that the declaration of Student given above has been made. Write a C++ function named NumGrads that has 2 parameters: an array of Students, and the size of the array. The function should return the number of students in the array who are grad students. 

# include <iostream>

using namespace std;

struct Address {
  string city;
  int zip;
};

struct Student {
  int id;
  bool isGrad;
  Address addr;
};

int NumGrads (Student S[], int len);

int main()
{
  Student a = {123, true, {"bj", 53703}};
  Student b = {0, false, {"", 0}};
  Student c = {0, true, {"", 0}};


  Student S[] = {a, b, c};
  cout << NumGrads(S, 3) << endl;
}

int NumGrads (Student S[], int len)
{
  int cnt = 0;
  for (int i = 0; i < len; i++)
    {
      if (S[i].isGrad == true)
	{
	  cnt ++;
	}
    }
  return cnt;
}
