#include <iostream>
#include <map>
using namespace std ;
int main ()
{
	
	map <string,int> M ;
	map <string,int> ::iterator iter ;
	int x,num;
	string name;
	cout<<"enter number of elments in map"<<endl;
	cin>>x;
	for(int i=0;i<x;i++)
	{
	cin>>num>>name;	
	//iter->first=num;
	//iter->second=name;
	}
	
	int total;
	
	
	for(iter=M.begin();iter!=M.end();iter++)
	{
		total+=iter->second;
	}	
	cout<<total<<endl;
	
	
	
	
	
	return 0 ;
}
