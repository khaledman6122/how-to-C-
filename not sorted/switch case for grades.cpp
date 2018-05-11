#include<iostream>
using namespace std;
int main()
{
	char grade;
	cin>>grade;
	switch(grade)
	{
		case 'a':
		case'A':
		cout<<"excellent"<<endl;
		break ;
		
		case'b':
		case 'B':
		cout<<"very good"<<endl;
		break;
		
		case'C':
		case 'c':
		cout<<"good"<<endl;
		break;
		
		case'd':
		case 'D':
		cout<<"pass"<<endl;
		break;
		
		case'F':
		case'f':
		cout<<"fall"<<endl;
		break;
		
		default :
		cout<<"invaild charachter enterd  try agian"<<endl;
 
	}
	
	
	
	return 0;
}
