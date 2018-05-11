#include <iostream>
#include <string>
#include <set>
using namespace std ;
int main ()
{
	set <int> SET;
	set <int> ::iterator iter ;
	set <string> SET2;
	set <string> ::iterator iter2 ;
	int x ,num;
	string name;
	cout <<"number of elments (set of numbers) : "<<endl;
    cin>>num;
	for(int i=0;i<num;i++)
	{
		cin>>x;
		SET.insert(x) ;
	}
    
    //display
    
	for(iter=SET.begin();iter!=SET.end();iter++)
	{
	  cout<<*iter<<" ";
	}
	cout<<endl<<endl;
	
	
	
    
    /*
    erase function in set : 
    linear search style
	delete exist elment 
    it not allowed to delete the begin or the end or anything not in the set
    - SET.erase(SET.begin());
    - SET.erase(SET.end());
	*/
    cout<<"enter number to delete"<<endl;
    cin>>x;
	SET.erase(x);
    
	for(iter=SET.begin();iter!=SET.end();iter++)
	{
	  cout<<*iter<<" ";
	}
	cout<<endl<<endl;
	
	
	
	
	//SET2 of strings
	cout <<"number of elments (set of names) : "<<endl;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cin>>name;
		SET2.insert(name) ;
	}
    
    //display
	for(iter2=SET2.begin();iter2!=SET2.end();iter2++)
	{
	  cout<<*iter2<<" ";
	}
	cout<<endl<<endl;
	
	
	
	
	cout<<"enter name to delete"<<endl;
    cin>>name;
	SET2.erase(name);
    
	for(iter2=SET2.begin();iter2!=SET2.end();iter2++)
	{
	  cout<<*iter2<<" ";
	}
	cout<<endl<<endl;
	
	
	
	
	
	
	return 0 ;
}
