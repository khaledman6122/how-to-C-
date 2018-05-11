#include <iostream>
#include <algorithm>
#include <string>
#include <stdlib.h>
#include <sstream>
using namespace std ;
int main ()
{
	stringstream ss;
    string y;
	int x=1005;	
	ss<<x;
	ss>>y;
	cout<<"x int = "<<x<<endl;
	cout<<"y string= "<<y<<endl;
	return 0;
}
