#include <iostream>
#include <map>
using namespace std ;
int main ()
{
	
	map <string,int> M ;
	map <string,int> ::iterator iter ;
	M["mubark"]=1;
	M["sisi"]=5;
	M["shafik"]=2;
	
	
	int x;
	x=M["sisi"];
	cout<<x<<endl;
	
	int total;
	for(iter=M.begin();iter!=M.end();iter++)
	{
		total+=iter->second;
	}
	cout<<total<<endl;
	
	
	
	
	
	
	
	
	
	return 0 ;
}
