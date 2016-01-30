#include <iostream>

using namespace std;

bool arrayEq(int A[], int B[], int len)
{
  for (int i = 0; i < len; i++)
    {
      if (A[i] != B[i])
	{
	  return false;
	}
    }
  return  true;
}
