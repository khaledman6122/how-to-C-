#include <iostream>
using namespace std ;
int main ()
{
	int prime_divisors[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	int size=sizeof(prime_divisors)/sizeof(int);
	int arr[100]={0},counter=0;
	
	//cout<<size<<endl;
	int num ;
	cin>>num;
	
	//  test = 1330 ,665
	
	for(int i=0;i<size;i++)
	{
		if(num%prime_divisors[i]==0)
		{
			num=num/prime_divisors[i];
			arr[counter]=prime_divisors[i];
			counter ++ ;
	        i--;
			}
		
	}
	
	
	if(counter>1)
	for(int i=0;i<counter;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	else if(counter==1)
	{
		cout<<1<<" "<<arr[0]<<endl;
	}
	else
	cout<<1<<" "<<num<<endl;

	
	
	
}
