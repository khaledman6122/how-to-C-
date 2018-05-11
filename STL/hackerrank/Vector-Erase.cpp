//   https://www.hackerrank.com/challenges/vector-erase/submissions/code/27168291   //
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
 {
   
   vector <long int> v;
   int x,y,n;
   cin>>n;
   for(int i=0 ;i<n;i++)
   {
   	cin>>x;
   	v.push_back(x);
   }
   
   cin>>x;
   v.erase(v.begin()+x-1);

   
   
   //1 4 6 2 8 9 //
   cin>>x>>y;
   if(x>y)
   swap(x,y);
   v.erase(v.begin()+x-1,v.begin()+y-1);
   
   cout<<v.size()<<endl;
   for(int i=0;i<v.size()-1;i++)
   cout<<v[i]<<" ";
   cout<<v[v.size()-1]<<endl;
   
   
   
   
   
   
   
    return 0;
}
	
