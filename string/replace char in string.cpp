#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
  	
  string s = "The quick brown fox jumps over the lazy dog.";
  replace( s.begin(), s.end(), "the", "xxx" );
  cout << s << endl;

  return 0;

  }
