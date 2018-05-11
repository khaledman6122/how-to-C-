#include <iostream>
using namespace std ;
float fun_avg (int num1,int num2,int num3)
{
	int sum;       // float sum ......
	float avg;
	sum=num1+num2+num3;
	 avg=(float)sum/3;                 //avg=sum/3;       
	cout<<"the SUM is :"<<sum<<endl;
	cout<<"the average is :"<<avg<<endl;
	return avg;
}

int main(){
	
	
	int x,y,z;
	cout<<"enter three integeres :"<<endl;
	cin>>x>>y>>z;
	fun_avg (x,y,z);
	return 0 ;
}
