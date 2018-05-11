#include <iostream>
#include <valarray>
#include <algorithm>
#include <math.h>
using namespace std ;
#define all(v)     (v.begin()),(v.end())

void print_valarray(valarray<int>& va,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<va[i]<<" ";
	}
	cout<<"\n\n";
}

int main()
{
	
	//1+10+5+13+2   (n=5)
	int n,arr[100]={0};
	cout<<"array size (ordinary array not valarray) ",  cin>>n;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	
	
	valarray <int> v1(arr,n);   // not (arr,arr+n);
	//print_valarray(v2,n); 
	for(int i=0;i<n;i++)
	cout<<v1[i]<<" ";
	cout<<"\n";
	
	/*
	v1= 1 2 3 4 5 
	v1.sum() = 1+2+3+4+5= 15
	
	v1= -1  -2  -3  -4  -5 
	abs(v1.sum())= 15
	*/
	cout<<"v1 sum "<<v1.sum()<<endl;
	cout<<"v1 abs(v1.sum()) "<<abs(v1.sum())<<endl;
	
	
	
	
	
	/*
	       v1 = -1 -2 -3 -4 -5
	v2=abs(v1)= 1  2  3  4  5
	*/
	/*
	valarray <int> v2=abs(v1);  
	cout<<"v2= abs(v1)"<<endl;
	print_valarray(v2,n); 
	*/
 	
	
	
	/*
	       v1= 1 + 2 + 3 + 4 + 5
	       v2= 1 + 2 + 3 + 4 + 5
	(v1+v2)v3= 2 + 4 + 6 + 8 + 10
	
	*/
	/*
	valarray <int> v3;
	v3=v1+v2;
	cout<<"v3 = v1 + v2 "<<endl;
	print_valarray(v3,n); 
	*/
	
	
	
	
	
	
	
	
	
	
	
	/*
	v1= 1  2  3  4   5
	v4=pow(v1,2)=  1^2   2^2   3^2   4^2   5^2
	v4= 1  4  9  16  25
	*/
	/*
	valarray <int> v4;
	v4=pow(v1,2);
	print_valarray(v4,n);
	*/	
	
	/*
	v1= 1  2  3  4   5
	v4=pow(2,v1)=  2^1   2^2   2^3   2^4   2^5
	v4= 2  4  8  16  32
	*/
	/*
	valarray <int> v4;
	v4=pow(2,v1);
	print_valarray(v4,n);
	*/
	
	
	
	return 0 ;
}
