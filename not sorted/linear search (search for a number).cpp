#include <iostream>
using namespace std ;
int main ()
{
	const int size=10;
	int number;
	int array[size];

	for(int i=0;i<size;i++){
		
		cout<<"enter the number"<<i+1<<endl;
		cin>>array[i];
		
			}
	
	cout<<"enter the number which you want search for"<<endl;
	cin>>number;
	int counter=0;
	for(int i=0;i<size;i++)
	{
    	if(number==array[i])
	    counter ++ ;   
	    }
	 
	if(counter>0)
		cout<<" FOUND "<<endl;
    else
	 	cout<<" NOT FOUND "<<endl;
    return 0 ;
	
}










