#include <iostream>
#include <vector>
using namespace std ;
int main ()
{
	int x ,y;
	vector <int> vec;
	// push back function put the number in the left side like array too //
	for(int i=0;i<5;i++)
	{
	cin>>x;
	vec.push_back(x);
	}



     // print with at function  //
    cout<<"print with at function"<<endl;
	for(int i=0;i<5;i++)
	{
	cout<<vec.at(i)<<" ";
	}
 		
	cout<<endl;	
	
	
	
	
	// pop back function //
	/*
	delete last element at the right side
	example :  1 2 3 4 5 delete 5  
	the size of vector will change after pop back  
	*/  
	/*
	vec.pop_back() ; 
	cout<<"pop back last number"<<endl;
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec.at(i)<<" ";
	}
	*/
	
	cout<<endl;
	
	
	


	
	// insert function //
	/*
	insert a number or anything in a specified index
    insert shifting the numbers to put the number you want in specified index  
	example 1 2 3 4      insert 5 at begin  '5' 1 2 3 4 
	        vec size was 4   .after insert.  vec size 5       
	example 5 1 2 3 4      insert 5 at (begin + 2) 5 1 '5' 2 3 4  
			vec size was 5   .after insert.  vec size 6      
	////////////////////////////////////////////////////
	
    vec.insert(vec.begin(),5);
    cout<<"after insert 5 at the begining"<<endl;
	for(int i=0;i<vec.size();i++)	
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	
    
	
	vec.insert(vec.begin()+2,5);
    cout<<"after insert 5 at the begining+2"<<endl;
	for(int i=0;i<vec.size();i++)	
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	

    vec.insert(vec.end(),9);
    cout<<"after insert 9 at the end"<<endl;
	for(int i=0;i<vec.size();i++)	
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	
    
	
	
	vec.insert(vec.end()-1,8);
    cout<<"after insert 8 before the end"<<endl;
	for(int i=0;i<vec.size();i++)	
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	*/
	
	
	
	
	// erase function 
	/* 
	delete a specified element from the vector 
	example : 5 1 5 2 3 4 8 9  erase (begin)  '5' erased 
	          1 5 2 3 4 8 9  
	
	example : 1 5 2 3 4 8 9    erase (begin+1) '5' erased
	          1 2 3 4 8 9
	
	example : 1 2 3 4 8 9      erase (end-2)   '8' erased
	          1 2 3 4 9 
	
	example : 1 2 3 4 9        erase (end-1)      '9' erased
	          1 2 3 4 
	
	/////////////////////////////////////////////////////////
	
	
	
	vec.erase(vec.begin());
    cout<<"after erase 5 at the begin"<<endl;
	for(int i=0;i<vec.size();i++)	
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	
	
	
	vec.erase(vec.begin()+1);
    cout<<"after erase 5 at the begin+1"<<endl;
	for(int i=0;i<vec.size();i++)	
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	
	
	
	
	vec.erase(vec.end()-2);
    cout<<"after erase 8 at before the end (end-2)"<<endl;
	for(int i=0;i<vec.size();i++)	
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	
	
 
	vec.erase(vec.end()-1);
    cout<<"after erase 9 at the end (end-1)"<<endl;
	for(int i=0;i<vec.size();i++)	
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
 

   */
   
   
   /*
   //erase function (range) from .. to ..
   
   EX: from index x=1  to y=2  
    elment : 1 2 3 4 5
     index : 0 1 2 3 4
   
   vec.erase(vec.begin()+x, .....)
   
    elment : 1 * * 3 4 5
     index : 0 1 2 3 4 5  
     vector increase itself by +1
     
     then you have to increase your function (only the end) 
     
   vec.erase(vec.begin()+x ,vec.begin()+y+1 )
     ex :   1 * * * 4 5
   index :  0 1 2 3 4 5
*/
    

    cout<<"check if vector is empty or no with empty()  function"<<endl;    
    
	//empty function 
    /*
    check if the vector is empty or not 
    (using a memory or no )
    return bool value 1 or 0 (true or false)
	*/
    cout<<vec.empty()<<endl;

    
    
    
    
	 // clear function 
     /*
     clear the vector ... the storage memory that is used by vector will be free (delete)
	  
    */
    cout<<"vec.clear(); "<<endl; 
	vec.clear();



    cout<<"check if vector is empty or no with empty()  function"<<endl;
	cout <<"after using clear() function"<<endl;    
    cout<<vec.empty()<<endl;








	return 0 ;
}
