#include <iostream>
using namespace std ;
int main ()
{
	int num,counter=0;
	while(cin>>num)
	{	
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		counter ++ ;
	}
	
	
	 // special case for '1' 
	if(counter==1) 
	cout<<"neither prime  nor composite"<<endl;
	
	
	//  divided by 1 and the number itself
	else if(counter==2) 
	cout<<"prime"<<endl;
	
	//for '1' and 'number' and other factors 
	else if(counter>2)  
	cout<<"composite"<<endl;
	
		counter=0;
		
	}
	
	
	
		
	return 0 ;
}
