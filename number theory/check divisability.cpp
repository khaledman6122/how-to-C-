#include <iostream>
#include <math.h>
using namespace std ;
int main ()
{
	int i=0,j=0,arr[100]={0},divisors[100]={0},number,temp_number,temp=0;
	cin>>number;
	temp_number=number;
	while(true)
	{
		if(i==2)
		break;		
		if(number%10==0)
		{
			if(temp>0)
			{
				arr[i++]=temp;	temp=0;
			}
			else 
			{
				arr[i++]=0;
			}
			number/=10;
		}
		else
		{number--;	temp++;}
		
	}
	temp=0;
	for(int j=0;j<i;j++)
	{
		temp+=(pow(10,j)*arr[j]);
	}
	
	j=0;
	for(int i=2;i<temp;i++)
	{
	if(temp%i==0)
	divisors[j++]=i;
	}
	
	if(j>0)   //the last two digits has its own divisros
	{
		for(int i=0;i<j;i++)
	{
		if(temp_number%divisors[i]==0)
		{
		cout<<"divisors for last two digits "<<endl;
		cout<<"the original number could be divisable by "<<divisors[i]<<endl;
		return 0;
		}
	}
	
	}
	
	  //no divisors for last two digits(prime)
	  //or the original number couldnt divisable by last two digit's divisors 
		for(int i=2;i<=temp;i++)
		{
		if(temp_number%i==0)
		{
			cout<<"check divisability for the whole number"<<endl;
			cout<<"the original number could be divisable by "<<i<<endl;
			break;
		}
		}
	
			
	  
	
	
	
	return 0;
}
