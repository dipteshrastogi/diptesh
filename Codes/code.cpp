#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n, d = 0, a = 0, b = 0;
    cin >> n;
    string s;
    cin >> s;

    //checking if the length of string is not equals to 1
    if (n != 1)
    {
      //here i'm extracting the last three digits of string to apply test of divisibility by 8 later on in the code
      d = (s[n - 1] - '0') * 1 + (s[n - 2] - '0') * 10 + (s[n - 3] - '0') * 100;
    }
    else
    {
      // if the length of string is 1, then only option is that no should itself be 8 to be divisible by 8
      s[0] = '0' + 8;
    }
    /*in this i'm checking if the remainder is added/ subtracted to extracted no, 
    which will later be used to check that will the resultant be divisible by 8 or not */
    a = d + d % 8;
    /* if the extractedd number is divisible by 8, then d%8 will be equal to zero, 
    then addition/subtraction of 0 won't change anything*/
    b = d - d % 8;
    if (n != 1)
    {
      if (d % 8 == 0)
      {
        /*if the extracted number is divisible by 8 then the given number is also 
        divisible by 8 and hence i don't have to change anything in the given number*/
        cout << s << endl;
      }
      else
      {
        /*if the extracted number isn't divisible by 8, then adding/subtracting
         the remainder will make it divisible by 8*/
        if (a % 8 == 0)
        {
          s[n - 1] = '0' + (s[n - 1] - '0') + d % 8;
          cout << s << endl;
        }
        else
        {
          s[n - 1] = '0' + ((s[n - 1] - '0') - d % 8);
          cout << s << endl;
        }
      }
    }
    else
    {
      cout << s << endl;
    }
  }
  return 0;
}