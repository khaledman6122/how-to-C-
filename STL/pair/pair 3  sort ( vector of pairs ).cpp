/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
#define all(v)     (v.begin()),(v.end())
bool compare_ascending(const pair<int,int>& a , const pair<int,int>& b)
{
	return a.second < b.second ;
}

bool compare_deacending(const pair<int,int>& a , const pair<int,int>& b)
{
	return a.second > b.second ;
}

void print_vectorofpairs(vector< pair<int,int> >& v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i].first<<" "<<v[i].second<<endl;	
	}
	cout<<"\n\n";
	
}
int main ()
{
	
	vector < pair<int,int> >	vp1;
	
	vp1.push_back(make_pair(50,13));
	vp1.push_back(make_pair(20,4));
	vp1.push_back(make_pair(60,3));
	vp1.push_back(make_pair(15,2));
	vp1.push_back(make_pair(100,16));
	
	sort(all(vp1),compare_ascending);
	cout<<"ascending based on second argument \n";
	print_vectorofpairs(vp1);
	
	
	sort(all(vp1),compare_deacending);
	cout<<"deascending based on second argument \n";
	print_vectorofpairs(vp1);
	
	
	
	return 0;

}
*/



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
#define all(v)     (v.begin()),(v.end())

void print_vectorofpairs(vector< pair<int,int> >& v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i].first<<" "<<v[i].second<<endl;	
	}
	cout<<"\n\n";
	
}

int main ()
{
	
	vector < pair<int,int> >	vp1;
	
	vp1.push_back(make_pair(50,13));
	vp1.push_back(make_pair(20,4));
	vp1.push_back(make_pair(60,3));
	vp1.push_back(make_pair(15,2));
	vp1.push_back(make_pair(100,16));
	
	/*
	sort(all(vp1));
	cout<<"ascending based on first argument \n";
	print_vectorofpairs(vp1);
 	*/
 	
 	
/* 	
	sort(all(vp1));
	reverse(all(vp1));
	cout<<"descending based on first argument \n";
	print_vectorofpairs(vp1);
 */
	
	 
	return 0;
	
}
	
	
