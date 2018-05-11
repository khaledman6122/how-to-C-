#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int main ()
{
	string line,result;
	getline(cin,line);
	for(int i=0;i<line.length();i++)
	{
		if(isalpha(line[i]))
		result+=line[i];
	}
	
	cout<<result<<endl;
	result.erase(unique(result.begin(),result.end()),result.end());
	cout<<result<<endl;
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
