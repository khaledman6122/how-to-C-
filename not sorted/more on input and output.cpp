#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std ;
int main ()
{
	
	  /*
	//flags : scientific  //
	//header file : <iomanip> //
	double x=142.1 ;
	cout<<setiosflags(ios::scientific)<<x<<endl;       // display in scientific representation  //
	*/
	
	
	
	
	/*
	//flags : showbase and (dec,oct,hex)  //
	//header file : <iomanip> //
	int x=20;
	cout<<showbase<<dec<<x<<endl;
	cout<<showbase<<oct<<x<<endl;
	cout<<showbase<<hex<<x<<endl;
	*/
	
	
	
	
	/*
	// flags : boolalpha //
   // header <iostream> //
	bool status = true ;
	cout << status <<endl;           // 1
	cout<<boolalpha<<status<<endl;  // true
	*/
	
	
	
	
	
	
	/*
	//from char to int  AND from int to char // 
	// dont forget static cast after that // 
	//flags (char) and (int) //
	//header <iostream> //
	
	cout<<(char)48<<endl;    //  0  as char 
	cout<<(int)'0'<<endl;   //   48  as value
	
	
	cout<<(char)65<<endl;    // A as char  
	cout<<(int)'A'<<endl;    // 65 as value 
	
	*/
	
	
	
	
	/* 
	
	// flag : static_cast //
   //header <iostream>   //
	 int x= 'A' ;
   cout<<x<<endl;
  cout<< static_cast <char>(x)<<endl ;
  //  cout<< (char)(x)<<endl ;

  // ........................................//


  // from capital to small  //
	char word;
    cin>>word;  
    
	int x=static_cast <char>(word);
    // or  int x=(char)word;
   
    x+=32;
    
    cout<<static_cast <char>(x);	
    //or cout<<(char)x;

	*/
	
	
	





	
	
	
	
	return 0;
}
