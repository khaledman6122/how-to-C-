#include <iostream>
#include <vector>
using namespace std ;
int main()
{
	vector <int> vec ; 



	// 1 2 3 4 5 6 7 8 9 10 //
	for(int i=1;i<=10;i++)
	vec.push_back(i);
	
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
	cout<<endl;
    /*
	    vec.push_back(11);
	    vec.push_back(12);
	    vec.push_back(13);
	    
	   before new push_back() 1 2 3 4 5 6 7 8 9 10  size = 10
	  
	   after : the memory created a vector of size  = 13
	             and copy the old vector to the new and (destroy or clear or delete )the old vector of size = 10 
	                   
	  summary : after push_back() the changes not happend on the old vector
	            memory created a whole new vector and copy the old vector to the new vector and also the push_back() elments beside it     
	*/ 
     



    /* 
    - resize function work depending on index
   	- it uses the old vector that means that memory doesn't make anew vector it just uses the old vector
	
	summary : it just change the size of vector and memory doesnt create a new vector and copy the old to new if push_back()
            : it's not erase function      
	 ex :
	 vector of size 5    // 1 2 3 4 5 //   
	 vec.resize(8)      // 1 2 3 4 5  "element"  "element"  "element"  //  
     
	  	   
	 ex :
	 vector of size 10    // 1 2 3 4 5 6 7 8 9 10 //   
	 vec.resize(7)       //  1 2 3 4 5 6 7  //  
        
    */
  
    for(int i=1;i<=10;i++)
    vec.push_back(i);   // 1 2 3 4 5 6 7 8 9 10 // 
     
	// 1 2 3 4 5...( 6 7 8 9 10  deleted ) 	 //
	vec.resize(5) ;
	for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
	cout<<endl;
	
	
	
   // 1 2 3 4 5 (100  100  100  Added) //
	vec.resize(8,100);  // from (end of vector + 1 = 5+1=6 )  to  8     all = 100  // 
	for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
	cout<<endl;
	
	
	
   // 1  2  3  4  5  100  100  100   (50  50  Added) //	
	vec.resize(10,50);  // from (end of vector + 1 = 8+1=9 )  to  10     all = 50  //  
	for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
	cout<<endl;
	
	
	
	
	
	return 0 ;
}
