#include <iostream>
using namespace std ;

int main()
{
	double distance[] = {44.14, 720.52, 96.08, 468.78, 6.28};
	int index = sizeof(distance) / sizeof(double);
	
	cout << "Array members and their values\n";
	
	for(int i = 0; i < index; ++i)
		cout << "Distance : " << i + 1 << distance[i] << endl;

	return 0;
}












