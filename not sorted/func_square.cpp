#include <iostream>

using namespace std ;

float square_area(float k)
{
	float square=k*k;
	cout<<square;
	return square;
	}

int main ()
{
	
	float x ;
	cin>>x;
	square_area(x);
	return 0;
}
