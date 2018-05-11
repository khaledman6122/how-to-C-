#include <iostream>
using namespace std ;
int main (){
	
	int max=0;
	int position_of_max=0;
	const int size=10;
	int array[size];
	
	for(int i=0;i<size;i++)
	{
		cout<<"enter the element number  "<<i+1<<"  :"<<endl;
		cin>>array[i];
		if (array[i]>max)
		{
			max=array[i];
	        position_of_max=i;   	
		  }
	}
      cout<<"the bigest number in the arrays'elments is "<<max<<"  and its position is  "<<position_of_max+1<<endl;
	

	return 0 ;
	
	
	
	
	
	
	
	
	
}
