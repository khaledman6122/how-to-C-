#include <iostream>
using namespace std;
int fun_module(int y)
{
	if (y%2==0)
	cout<<"even"<<endl;
	
	else if (y%2==1)
	cout<<"odd"<<endl;
return y;
}

int main (){
int x,z;	
	cin>>x;
	fun_module(x);
	cin>>z;
	fun_module(z);
	
		return 0;	
}
