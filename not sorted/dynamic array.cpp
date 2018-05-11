
#include <iostream>
using namespace std ;
int main()
{
	int i;
	int *p;
	cin>>i;
	p=new int [i];
	for(int j=0;j<i;j++)
	{
		cin>>p[j];
	}
	for(int j=0;j<i;j++)
	{
		cout<<p[j];
	}
	
}
