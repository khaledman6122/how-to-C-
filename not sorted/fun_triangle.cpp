#include <iostream>
using namespace std;
 float fun_triangle(float h,float b)
  {
  	float area=0.5*h*b;
  	cout<<area<<endl ;
  	 return area ;
  }
 
 int main()
 {
 	
 	float xh,yb;
 	cin>>xh>>yb;
 	fun_triangle(xh,yb);
 /*	
 float a,b;
 	cin>>a>>b;
 fun_triangle(a,b);
 */	
 	return 0;
 }
