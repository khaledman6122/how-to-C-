#include <iostream>
#include <iomanip>
using namespace std ;
int main ()
{


  int array[10];
	cout<<"elements"<<setw(13)<<"value"<<endl;

   for (int i=0;i<10;i++)
{
	
	array[i]=100+i;
}

for(int j=0;j<10;j++)
{
		cout<<j<<setw(13)<<array[j]<<endl;
	
}

	
		
	
	
	
	return 0 ;
}










/*
#include <iostream>
#include <iomanip>
using namespace std ;
int main ()
{


  int array[10]={100};
	cout<<"enter the elments of the 1D array"<<endl;
	for(int i=0;i<=9;i++)

	
	for(int j=0;j<9;j++)
	{

	cout<<i<<setw(13)<<array[j]+i<<endl;
	
		
	}
	
	
	
	return 0 ;
}


*/
