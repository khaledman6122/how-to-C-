#include <iostream>
using namespace std ;
int main ()
{
	const int size =5;
	int array [size];
	int min=0,max=0,position_max,position_min;
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
    } 
   	 
	 	for(int i=0;i<size;i++)
	 {
	 	if(array[i]>max)
	 	{
	 		max=array[i];
	 		position_max=i;
		 }
	
	}
	cout<<"the max is :"<<max<<endl;
	cout<<"the max positionis :"<<position_max<<endl;
	  
	  
	  min=array[0];
	 	for(int i=0;i<size;i++)
        {
	  if(array[i]<=min)
	 	{
	 		min=array[i];
	 		position_min=i;
		 }
	
		 }
	 	cout<<"the min is :"<<min<<endl;
	cout<<"the min positionis :"<<position_min<<endl;

	 
	 
	 
	 return 0 ;
}
