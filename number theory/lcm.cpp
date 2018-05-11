#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std ;
#define ll long long
int arr[100]={0},arr2[100]={0},carr=0,carr2=0,c=0;
void prime_factorization(ll number,ll ind)
{

	for(int i=2;i<=100;i++)
	{
		for(int j=1;j<=i;j++)
		if (i%j==0) c++ ;
		if(c==2)
		{
			while(number%i==0)
			{
				if(ind==0)
				{
				arr[carr++]=i;
				number/=i;	
				}
				else if(ind==1)
				{
				arr2[carr2++]=i;
				number/=i;
				}
			}
		}
		c=0;
	}
	
	if(ind==1)
	{
	for(int i=0;i<carr;i++) cout<<arr[i]<<" ";
	cout<<endl;
	for(int i=0;i<carr2;i++) cout<<arr2[i]<<" ";
	cout<<endl;
	}
}

void lcm(int arr[],int arr2[])
{
	int LCM;//  =accumulate(arr,arr+carr,1,multiplies<int>())*accumulate(arr2,arr2+carr2,1,multiplies<int>());
	int j=0 ;
	for(int i=0;i<carr;i++)
	{
		for(j ; j<carr2;j++)
		{
			if(arr[i]==arr2[j])
			{
				arr2[j]=1;
				j=0;
				break ;
			}
			
		}
		j=0;
	}
	LCM=accumulate(arr,arr+carr,1,multiplies<int>())*accumulate(arr2,arr2+carr2,1,multiplies<int>());
	cout<<"LCM = "<<LCM<<endl;
 
}

int main()
{
	ll number[2]={0};
	
	for(int n=0;n<2;n++)
	{
		cin>>number[n];
		prime_factorization(number[n],n);	
	}
	
	lcm(arr ,arr2 );
	





 
return 0 ;
}
