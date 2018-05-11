#include <iostream>
#include <iomanip>
#include <sstream>
//#include <string>
#include <stdlib.h>
using namespace std ;
int main ()
{

// header file : #include <sstream>    //
// to read data such as int , double , string ..  from string   //
	string data1 =" 1mostafa ";
	int inum=0;
	string name ; 
	double dnum=0.0 ;                  
	//cout<<dnum<<endl;            // default value : 1.80753-307   //
	istringstream iss (data1);   // iss can be anything you want  ,, ( scanner ) //
	iss>>inum>>name>>dnum;      //  u cant manipulate when reading from stream  iss>>inum+15>>name+'A'>>dnum+1.2;  ERROR    //
 	// now i can manipulate on each seprated type //  
	cout<<inum<<endl;
	cout<<name<<endl;
	cout<<dnum<<endl;
	
	
	
	
	
// ..................................................................................//




/*


// atoi function : convert from string to int  //   
// header file :  #include <stdlib.h>         // 
    string num ;
    cin>>num;
    int x;
    x=atoi(num.c_str()) ;
    cout<<x<<endl;   // x is int value u can manipulate it mathmatically  //
  
  
  
  */  

return 0 ; 
}

