#include <iostream>
#include <vector>
using namespace std ;
int main ()
{
	int x ,y;
	vector <int> vec;


	for(int i=0;i<6;i++)
	{
	cin>>x;
	vec.push_back(x);
	}
	
		
	// any range from the small to bigger (ascending/incremental order)	
			
	//5 2 4 7 8 9		output:5 2 9 
	//vec.erase(vec.begin()+2,vec.begin()+4+1);
	
	//5 2 4 7 8 9		output:7 8 9 
	//vec.erase(vec.begin(),vec.begin()+2+1);
	
	
	//5 2 4 7 8 9		output:5 7 8 9 
	//vec.erase(vec.begin()+1,vec.begin()+2+1);
	
	
	//5 2 4 7 8 9		output: 9 
	//vec.erase(vec.begin(),vec.end()-2+1);
	
	
	//5 2 4 7 8 9		output: 5 2 8 9 
	//vec.erase(vec.end()-4,vec.end()-3+1);
	
	
	// any range from the small to bigger (ascending/incremental order)	
	//5 2 4 7 8 9		output: 5 2 4 7 
	//vec.erase(vec.end()-2,vec.end()-1+1);
	
	//(vec.end()-1,vec.end()-2+1)
	
	
	
	
	
	
	
	//watch out when u insert something in the end()
	//5 2 4 7 8 9		output: 5 2 4 7 8 9 1 
	//vec.insert(vec.end(),1);
	
	
	//5 2 4 7 8 9		output: 5 2 4 7 8 1 9
	//vec.insert(vec.end()-1,1);
	
	
	
	//5 2 4 7 8 9		output: 1 5 2 4 7 8 9
	//vec.insert(vec.begin(),1);
	
	
	//5 2 4 7 8 9		output: 5 1 2 4 7 8 9
	//vec.insert(vec.begin()+1,1);
	
	
	
	
	
	
	for(int i=0;i<vec.size();i++)  cout<<vec[i]<<" ";
	
	return 0;
}
