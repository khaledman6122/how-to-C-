#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main()
{
	
	cout<<"fixed size of vector = 6 "<<endl;
	cout<<"vector intiallized with 0 "<<endl;
    
    
	vector <int> vec(6,0),vec1 ;            // size=6  all numbers is zeros //
	vector <int> ::iterator iter;  
			    /*
					-like a pointer have address and value 
					-when you increment an iterator its address that will be incremented(10x000n70 for example) 
					 not the valued kept by the iterator 
					-if you use an iterator for output a vector with for loop 
						and you want to output the same vector with the same iterator again with another method
						you have to reintialize the iterator 
						 iter=vec.begin();
								  
				 */ 						



	for(iter=vec.begin();iter!=vec.end();iter++)
   {
    cout<<*iter<<endl;	
   }
 	iter=vec.begin();           //reintiallization for the iterator //
 	while(iter!=vec.end())
	{
	cout<<*iter<<" ";
	iter++;
	} cout<<endl;	

 	/////////////////////////////////////////////////////////////////////
 	//copy vector without declaration (declared before)
 	vec1.assign(vec.begin(),vec.end());
 	iter=vec1.begin();           //reintiallization for the iterator //
 	while(iter!=vec1.end())
	{
	cout<<*iter<<" ";
	iter++;
	} cout<<endl;	

 	
 	
 	
 	
 	
	/////////////////////////////////////////////////////////////////////
    //copy vector with declaration
	vector <int> vec2(vec.begin(),vec.end());
	vector <int> ::iterator iter2;  
	int x,num;
    cout<<"enter size of vector 2 "<<endl; 
    cin>>x;
    for(int i=0;i<x;i++)
    {
    	cin>>num;
    	vec2.push_back(num);
	}
    
	
    sort(vec2.begin(),vec2.end());    // sort function// 
	    
	for(iter2=vec2.begin();iter2!=vec2.end();iter2++)  cout<<*iter2<<" ";
     cout<<endl;
	 
	// sort function (greater first)  // 
	cout<<"sort with greater first"<<endl;
	sort(vec2.begin(),vec2.end(),greater <int>());
    for(iter2=vec2.begin();iter2!=vec2.end();iter2++) cout<<*iter2<<" ";
    cout<<endl;


    // sort function (less first)  //
    cout<<endl<<"sort with less first"<<endl;
	sort(vec2.begin(),vec2.end(),less <int>());
    /*
    //another way
    sort(vec2.begin(),vec2.end(),greater <int>());
    reverse(vec2.begin(),vec2.end());  
	*/
       
    for(iter2=vec2.begin();iter2!=vec2.end();iter2++) cout<<*iter2<<" ";
    cout<<endl;
    





	return 0 ;
}
