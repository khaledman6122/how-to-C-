/*
-no repeations
-everything you put in the SET will be sorted 
thats mean you cant use push_back() function like vector all you can use is SET.insert()
-no index ( SET[i] or  SET.at(i)  ) not like array or vector
-binary search style
*/
#include <iostream>
#include <set>
using namespace std ;
int main ()
{
	set <int> SET;
	set <int> ::iterator iter ;
	set <int> ::reverse_iterator riter ;
	int x ,num;
	cout <<"number of elments : ", cin>>num;
	
	for(int i=0;i<num;i++)
	{
		cin>>x;
		SET.insert(x) ;
	}
    
	/*
	not allowed to use the following : 
	- cout<<SET[i]<<" ";
	- cout<<SET.at(i)<<" " ;
	*/
	

	for(iter=SET.begin();iter!=SET.end();iter++)
	{
	  cout<<*iter<<" ";
	}
	
	cout<<endl<<"reverse"<<endl;
		
	for(riter=SET.rbegin();riter!=SET.rend();riter++)
	{
		cout<<*riter<<" ";
    }





	return 0 ;
}
