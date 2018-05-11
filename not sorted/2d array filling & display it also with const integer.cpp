/*
#include <iostream>
#include <string>
using namespace std ;
int main ()
{
	cout<<"enter the elements of the 2D array"<<endl;
	int array[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>array[i][j];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
	 		cout<<array[i][j]<<endl;;
		}
		
	}
	
	return 0; 
	

}
*/

#include <iostream>
#include <string>
using namespace std ;
int main ()
{
	cout<<"enter the elements of the 2D array"<<endl;
     const int x=3;
	int array[x][x];
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<x;j++)
		{
			cin>>array[i][j];
		}
	}
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<x;j++)
		{
	 		cout<<array[i][j]<<endl;;
		}
		
	}
	
	return 0; 
	

}



























/*

	char word[6]= {'k','h','a','l','e','d'};
	for (char i=0;i<7;i++)
	{
		cout<<word[i];
	}
	
	*/
