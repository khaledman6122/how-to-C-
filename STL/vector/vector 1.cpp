#include <iostream>
#include <vector>
using namespace std ;
int main()
{
	
	vector <int> vec ;
	//vector <int> vec(6,0) ;  size=6  all numbers is zeros //
	vector <int> ::iterator iter;  // like a pointer have address and value //
	int x,num;
	cout<<"vector size : ",cin>>x;

	for(int i=0;i<x;i++)
	{
		cin>>num;
		vec.push_back(num);
		//vec.insert(vec.begin()+i,num);		//tricky one 
		//try this vec.insert(vec.end()-x+i,num);		 
	}
    
    
    cout<<endl<<endl;
     
     
     
     cout<<"//print vector..... with iterator (while loop) //"<<endl;
    //print vector..... with iterator (while loop) //
    iter=vec.begin(); 
	while (iter!=vec.end())
    {
    	cout<<*iter<<" ";
    	iter ++;
	}
	cout<<endl<<endl;
    
	
	cout<<"//print vector..... with iterator (for loop) //"<<endl;
	//print vector..... with iterator (for loop) //
    for(iter=vec.begin();iter!=vec.end();iter++)
	{
	cout<<*iter<<" ";       // *iter print stored value //
	//cout<<&iter<<endl;    // *iter print address for example 10x0541 //
	}
    cout<<endl<<endl;



     cout<<"//print vector..... (array access method)//"<<endl;
     //print vector..... with iterator (array access method)//
    for(int i=0 ;i<x;i++)
	{
	cout<<vec[i]<<" ";      
	    
	}
    cout<<endl<<endl;






	
	

    // operation on vector like array. for example : vec[i]..arr[i] //
	cout<<"adding one and change in real value"<<endl;
	for(int i=0;i<x;i++)
	{
		vec[i]+=1;
	}
	for(iter=vec.begin();iter!=vec.end();iter++)
	cout<<*iter<<" "; 
	
	cout<<endl<<endl;
	
	/*
	operations in the print operation 
	example cout<<x<<endl;  
	        cout<<++x<<endl;   // pre incrment //
	*/		   
	cout<<"adding one and *NO* change in real value (print + 1)"<<endl;
	for(iter=vec.begin();iter!=vec.end();iter++)
	cout<<*iter+1<<endl; 
	
	
	
	cout<<"vector size :"<<vec.size()<<endl;
	return 0 ;
}
