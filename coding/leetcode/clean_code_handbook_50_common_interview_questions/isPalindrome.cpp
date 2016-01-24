#include <ctype.h>

using namespace std;

// int isalnum (int c):: checks whether c is either a decimal digit
//                       or an uppercase or lowercase letter
bool isPalindrome(string s)
{
  int i = 0;
  int j = s.length() - 1;
  while (i < j)
  {
    while (i<j && !isalnum(s[i])) i++;
    while (i<j && !isalnum(s[j])) j--;
    if (tolower(s[i]) != tolower(s[j])) return false;
    i++; j--;
  }
  return true;
}
