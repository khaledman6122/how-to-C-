#include <iostream>
#include <set>
#include <string>
using namespace std ;
int main ()
{
	set <string> SET;
	set <string> ::iterator iter ;
	int num;
	string word ;
	cout <<"number of elments : ", cin>>num;
	for(int i=0;i<num;i++)
	{
		cin>>word;
		SET.insert(word) ;
	}
	SET.erase(0);
	//cout<<SET.lower_bound();	
	
	for(iter=SET.begin();iter!=SET.end();iter++)
	{
	  cout<<*iter<<endl;
	}
	
	
	

		
	return 0 ;
}
