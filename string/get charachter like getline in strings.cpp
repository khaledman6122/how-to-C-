#include <iostream>
#include <string>
using namespace std; 
int main()
{
	
	char letter ;
	cout<<"first test get one character only"<<endl;
	cout<<"enter one charcter  "<<endl<<endl;
	
	letter=getchar();
	cout<<letter<<endl;
	
	
	cout<<"second test get alot of characters"<<endl<<" (it's lok like get line in strings but it's different) "<<endl;
	while(letter=getchar())
	{
		cout<<letter;
		//break ;
	}
}
