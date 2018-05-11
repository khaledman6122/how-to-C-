#include <iostream> 
using namespace std;

float fun_area(float r)
 {          
    float area;
    area=(r*r)*(3.14);
	cout<<area;
	return r;
 }


int main ()
{
	float x;
	cin>>x;
	fun_area(x);
	
	return 0;
	
}
