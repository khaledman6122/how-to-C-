
#include <iostream>
#include <cmath>
using namespace std ;
int main ()
{
	cout<<"enter the elements of the 2D array"<<endl;
     const int x=3;
	int array[x][x],sum=0;
	
	
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
			sum+=array[i][j];
		}
		}
    	cout<<"total of 2D arrays"<<sum<<endl;
	
	
	return 0; 
	

}


