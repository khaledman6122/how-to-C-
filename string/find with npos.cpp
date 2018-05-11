#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define endl "\n"
#define ll long long
using namespace std ;
int main ()
{
	string line,chr;
	cin>>line;
	cin>>chr;
	int index=line.find(chr);
	if(index!=string::npos)
	{
		cout<<"found at index = "<<index<<endl;
	}
	
	else	cout<<"not found"<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
