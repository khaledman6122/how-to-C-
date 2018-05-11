#include <iostream>
#include <vector>
using namespace std ;
void fillvector(vector<int>&f_vec,int x)
{
	int num;
	for(int i=0;i<x;i++)
	{
		cin>>num;
		f_vec.push_back(num);
	}
	
}
void printvector(vector<int>f_vec)
{
	/*
	for(int i=0;i<f_vec.size();i++)
	cout<<f_vec.at(i)<<" ";
	*/
	
	vector <int> ::iterator iter ;
	for(iter=f_vec.begin();iter!=f_vec.end();iter++)
	cout<<*iter<<" ";
	
	
	cout<<endl;
	
}
void reverse_printvector(vector<int>f_vec)
{
	/*
	//size of vector =5 -----> indexs 0 1 2 3 4   start from   4=size-1
	for(int i=f_vec.size()-1;i>=0;i--)
	cout<<f_vec[i]<<" ";
	*/
	
	vector <int>   ::reverse_iterator  riter; 
	for(riter=f_vec.rbegin();riter!=f_vec.rend();riter++)
	cout<<*riter<<" ";
	
	
	cout<<endl;
}


void printevens(vector<int>f_vec)
{
	/*
	for(int i=0;i<f_vec.size();i++)
	if(f_vec.at(i)%2==0)
	cout<<f_vec.at(i)<<" ";
	*/
	
	vector <int> ::iterator iter ;
	for(iter=f_vec.begin();iter!=f_vec.end();iter++)
	{
		if(*iter%2==0)
		cout<<*iter<<" ";
	}
	
	
	cout<<endl;
	
}

replace_evens(vector<int>&f_vec,int x)
{
	vector <int> ::iterator iter ;
	for(iter=f_vec.begin();iter!=f_vec.end();iter++)
	{
		if(*iter%2==0)
		*iter=0;
	}
//	printvector(vec);

}
int main ()
{
	vector<int>vec;
	int size ;
	cin>>size;
	
	
	cout<<"vector fill "<<endl;
	fillvector(vec,size);
	cout<<"size "<<vec.size()<<endl;
	
	
	cout<<"vector elements "<<endl;
	printvector(vec);
	
	
	
	cout<<"REVERSE "<<endl;
	reverse_printvector(vec);
	
	
	
	cout<<"even numbers in vector"<<endl;
	printevens(vec);
	
	
	
    /*
	you can call 	printvector(vec);
    inside the replace_evens(vec,0);
	*/	
	cout<<"replace evens with 0 "<<endl;
	replace_evens(vec,0);
	printvector(vec);
	
	
	
	
	
	return 0 ;
}
