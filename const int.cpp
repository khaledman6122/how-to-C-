#include <iostream>
using namespace std ;
int counter()
{
  int number;
  cin>>number;
  return number;
}

int main ()
{
	
	const int  x=counter();
	cout<<x;
	
	
	return 0;
}
