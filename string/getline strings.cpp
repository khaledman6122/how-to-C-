#include <iostream>
#include <string>
using namespace std; 
int main()
{
	/*
	string line ;
	cout<<"please enter line : "<<endl;
	getline(cin,line);
	cout<<"the line is :"<<endl;
	cout<<line<<endl;
	*/
	string line ;
	cout<<"please enter line : "<<endl;
	getline(cin,line,'?');
	cout<<"the line is :"<<endl;
	cout<<line<<endl;
	
	
	
	return 0;
}
