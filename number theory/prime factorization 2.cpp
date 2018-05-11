#include <iostream>
using namespace std ;
bool isprime(int x )
{
	int c=0;
	for(int i=1;i<=x;i++)
	if(x%i==0)c++;
	if (c==2)
	return true ;
	else return false ;
	
}
int main() {
	

	int arr[100]={0},carr=0,counter=0 ;
	long long int number ;
	while (cin>>number)
{
	
	for(int i=2;i<=100;i++)
	{
		if(isprime(i))
		{
			while (number%i==0)
			{
				number/=i;
				counter++;
			}
			if(counter>0)
			{
				for(int j=0;j<counter;j++)
			{
				arr[carr++]=i;
			}
			counter=0;
			}
		}
	}
		if(carr>0)
		{
		for(int j=0;j<carr;j++)
		cout<<arr[j]<<" ";
		cout<<"\n";
		carr=0;
		}
		
	
	}



















return 0 ;
}
