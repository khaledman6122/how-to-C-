#include <iostream>
using namespace std;
int main(){
	const int size=10;
	int counter=0;
	int array[size];
	for(int i=0;i<size;i++){
		cin>>array[i];
			}
	
	for(int i=0;i<size;i++)
	{
		if(array[i]>=10)
		{
			counter++;
		}
		
	}
		cout<<"the number which is greater than or equel to ten is :"<<counter<<endl;	
			
			
return 0;	
}



/*

#include <iostream>
using namespace std ;
int main()
{
const int size=9999;
int array[size];
int number;
cin>>number;
for(int i=0;i<size;i++)
{
	
	cout<<i+number<<endl;
}

	return 0 ;
	
}

*/
