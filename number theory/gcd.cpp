#include <iostream>
#include <algorithm>
using namespace std ;
int gcd(int a,int b)
{
	int c1=0,c2=0,arr1[50]={0},arr2[50]={0};
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			arr1[c1]=i;
			c1++;
		}
	
	
	}
	
	for(int i=1;i<=b;i++)
	{
		if(b%i==0)
		{
			arr2[c2]=i;
			c2++;
		}
	}
	//int size1=sizeof(arr1)/sizeof(int);
	//int size2=sizeof(arr2)/sizeof(int);
	int gcd;
	for(int i=0;i<c1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			if(arr1[i]==arr2[j])
		    {
		    	gcd=arr1[i];
		    	break;
			 } 
		}
	}
	return gcd ;
}
int main ()
{
	int x,y;
	cin>>x>>y;
	//cout<<__gcd(x,y)<<endl;
	 //cout<<(x*y)/(__gcd(x,y))<<endl;
	
	
	cout<<"GCD = "<<gcd(x,y)<<endl;
	cout<<"LCM = "<<(x*y)/(gcd(x,y))<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
