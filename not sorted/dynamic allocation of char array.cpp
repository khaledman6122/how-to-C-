#include <iostream>
using namespace std ;
int main ()
{
	int n=0;
	char *letter;
	cin>>n;
	letter=new char[n];
	for(int j=0;j<n;j++)
	{
		cin>>letter[j];
	}
	
	
	for(int j=0;j<n;j++)
	{
		cout<<letter[j]<<" ";
	}
	
	
	
	
	
}
