#include<iostream>
using namespace std ;

int fun_up(int x)
{
	if(x<0)
	return 5555;
	else{
		cout<<"before recall "<<x<<endl;
		fun_up(x-1);
		cout<<"after recall "<<x<<endl;
	}	

}


int main (){
	
	int num;
	cin>>num;
	
//	cout<<(int)(0+(1-0)/2)<<endl;
	cout<<fun_up(num)<<endl;
	
//system("pause")	;
	return 0 ;
	
	
	
}



























/*
#include <iostream>
using namespace std ;

int fun_down(int number){
if (number==0)
return 0;
else   
{
	cout<<number<<endl;
	fun_down ( number-1 );
	 return 0;
	 }
}

void print(int p)
{
if (p==0)
   return;
else{

cout<<p<<endl;
print(p-1);
return;
}
}

int main (){
	int x ; 
	cin>>x;
cout<<endl<<endl;
cout<<"int FUNCTION return value "<<endl;
	fun_down(x); 
cout<<endl<<endl<<endl;
cout<<"void FUNCTION return nothing"<<endl;
print(x);
}

*/







/*
#include <iostream>
using namespace std ;
int fun_fact(int number){
	if (number<=1)
	return 1;
	else if (number >1)
	{
	return number * fun_fact (number-1); 
	}
}
int main (){
	int x ;
	cin>>x;
	cout<<fun_fact(x)<<endl; 
	return 0 ;
}

*/
