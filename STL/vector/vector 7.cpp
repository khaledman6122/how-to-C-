#include <iostream>
//#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <numeric>   //accumulate
#define all(v)  (v.begin()),(v.end())     //#define all(v)  ((v).begin()),((v).end())
#define sz(v)   ((int)(v).size())        //#define sz(v)   ((int)(v.size())) 
using namespace std ;
void print_vector(vector <int>& VEC)
{
    vector <int> ::iterator iter;
    cout<<"vector elments"<<endl;
	for(iter=VEC.begin();iter!=VEC.end();iter++)
  {
  cout<<*iter<<" ";	
  }
  cout<<endl;	
}
void input_vector(vector <int>& VEC,int X)
{
     int num;  
    for(int i=0;i<X;i++)
  {
  	cin>>num;
  	VEC.push_back(num);
  }
  cout<<endl;
}



int binary_search(vector<int>& VEC,int lower_bound,int upper_bound,int num)
{
	int mid= (lower_bound + upper_bound) / 2 ;
	if(lower_bound==upper_bound)
	{
		return lower_bound;
	}
	else
	{
		
	//recursive case
	if(VEC[mid]<num)
	{
		lower_bound=mid+1;
		return binary_search(VEC,lower_bound,upper_bound,num) ;
	}
    //recursive case
	if(VEC[mid]>num)
	{
		upper_bound=mid-1;
		return binary_search(VEC,lower_bound,upper_bound,num) ;
	}
	
	//base case	
	if(VEC[mid]==num)	
    {
    	return mid ;
	}
	}
	

}   

bool isodd(int n)
 {
    return n%2!=0;	   // if true
 }  


bool iseven(int n)
 {
    return n%2==0;	   // if true
 }  



int main ()
{
	typedef vector<int> vi ;
	typedef vector<int> ::iterator it ;
	int x,num;
	vi vec1,vec2,vec3;
	cout<<"vector 1 size"<<endl; cin>>x ;
	input_vector(vec1,x);
	print_vector(vec1);
	
	/*
	cout<<"vector 2 size"<<endl; cin>>x ;
	input_vector(vec2,x);
	print_vector(vec2);
	*/
	
	
	
	
	
	/*
	//compare
	if(vec1<vec2)
	cout<<"vec1 smaller than vec2"<<endl;
	else if(vec1>vec2)
	cout<<"vec2 smaller than vec1"<<endl;
	*/
	
	
	
	//*************************************************************************//
	
	
	
	/*
	
	// replace and replace if

	//replace        (two numbers)
	replace(all(vec1),1,500);
	print_vector(vec1);
	
	
	//replace_if     (assign a value) (more dynamic)
	replace_if(all(vec1),isodd,500);
	print_vector(vec1);
	
	
	//replace_if     (assign a value) (more dynamic)
	replace_if(all(vec1),iseven,400);
	print_vector(vec1);
	
	*/
     
	 
	/*
	//*max_element
	//*min_element
    int max=*max_element(all(vec1));
	cout<<max<<endl;
	
    int min=*min_element(vec2.begin(),vec2.end());
	cout<<min<<endl;
	*/
	
	/*
	//count
    int x ;
 	cout<<"enter number to count how many times is in vector"<<endl;
 	cin>>x;
 	cout<<count(all(vec1),x)<<endl;
	
	*/
	
	
	//erase number  
	/*
	cout<<"enter number to remove all ",cin>>x;
	vec1.erase(remove(all(vec1),x),vec1.end());
	print_vector(vec1);
	*/
	
	
	
	
	
	
	
	
	
	//*************************************************************************//
	
	/*
	//accumulate sum or multiplies
	
	// 0 + (vec elments)
	int vec_sum=accumulate(all(vec1),0);
	cout<<"accumulate sum"<<vec_sum<<endl;
	
	// 1 + (vec elments)
	vec_sum=accumulate(all(vec1),1);
	cout<<"accumulate sum + 1(increse in function)"<<vec_sum<<endl;
	
	
	// 1*(vec elments)    1,multiplies <int>()
	int vec_mult=accumulate(all(vec1),1,multiplies <int>());
	cout<<"accumulate multiplies"<<vec_mult<<endl;
	
	// 2*(vec elments)     2,multiplies <int>()
	int vec_mult=accumulate(all(vec1),2,multiplies <int>());
	cout<<"accumulate multiplies (multiplied by 2)"<<vec_mult<<endl;
	*/
	
	
	
	
	
	//vec2.clear();
	//vec2 must be empty or size = 0 ;
	/*
	partial sum
	
	vec1 =1 2 3 4 5 
	partial sum = (1),(1+2),(1+2+3),(1+2+3+4),(1+2+3+4+5)
	partial sum =  1  ,  3  ,  6  ,  10   ,   15
	
	vec1 =1 2 3 4 5 
	partial sum(minus) = (1),(1-2),(1-2-3),(1-2-3-4),(1-2-3-4-5)
	partial sum(minus) =  1  ,  -1  ,  -4  ,  -8   ,   -13
	
	vec1 =-1 -2  3  4 
	partial sum(minus) = (-1) , (-1)-(-2) , (-1)-(-2)-(3) , (-1)-(-2)-(3)-(4)
	partial sum(minus) = (-1),(-1-(-2)),(-1-(-2)-3),(-1-(-2)-3-4)
	partial sum(minus) =  -1  ,  -1+(2)  ,  -1+(2)-3  ,  -1(+2)-3-4   
	partial sum(minus) =  -1  ,    1     ,    -2     ,     -6
	
	*/
	/*
	partial_sum(all(vec1),back_inserter(vec2)); // partial_sum(all(vec1),back_inserter(vec2),plus<int>());
	cout<<"subtracting array (partial sum)"<<endl;
	print_vector(vec2);  vec2.clear();
	// try if(vec1[0]>0)vec1[0]*=-1;
	partial_sum(all(vec1),back_inserter(vec2),minus<int>());
	print_vector(vec2);
	*/
	
	
	
	
	//inner_product (SOP)  mgmo3 l madareeb  (darb l rakam fe nafso ba3d kida tgm3)
	/*
		//sum of products
	  	vec1= 1 2 3 4 5 
	  	inner_product(plus)= ( 1*1 + 2*2 + 3*3 + 4*4 +5*5 )  = 55
	  	inner_product(minus)= ( -1*1 + -2*2 + -3*3 + -4*4 + -5*5 )  = -55
	
	*/
	// important look out for the third parameter "0"
	/*
	int sumofproducts1=inner_product(all(vec1),vec1.begin(),0);
		cout<<"inner product SOP "<<sumofproducts1<<endl;
	
	int sumofproducts2=inner_product(all(vec1),vec1.begin(),0,plus<int>(),multiplies<int>());
		cout<<"inner product SOP (plus) "<<sumofproducts2<<endl;
	
	int sumofproducts3=inner_product(all(vec1),vec1.begin(),0,minus<int>(),multiplies<int>());
		cout<<"inner product SOP (minus) "<<sumofproducts3<<endl;
	
	*/
	
	//inner_product (POS)   madareeb  l magmo3
	/*
		//products of sum 
	  	vec1= 1 2 3 4 5 
	  	inner_product(plus)= (1+1)*(2+2)*(3+3)*(4+4)*(5+5) = 3840
	  	inner_product(minus)= (-1+1)*(-2+2)*(-3+3)*(-4+4)*(-5+5) = 0
	*/	
	
	
	// important look out for the third parameter "1"
	int productsofsum1=inner_product(all(vec1),vec1.begin(),1,multiplies<int>(),plus<int>());
		cout<<"inner product POS (plus) "<<productsofsum1<<endl;
	 
		productsofsum1=inner_product(all(vec1),vec1.begin(),1,multiplies<int>(),minus<int>());
		cout<<"inner product POS (minus) "<<productsofsum1<<endl;
	 
	
	
	
	
	
	
	
	
	
	
	//adjacent_difference
	/*
	first number is always be the same (constant)
  	vec1 =  1  4  5   6   13   20
	adjacent_difference(vec2)=(1),(4-1),(5-4),(6-5),(13-6),(20-13) 
    vec2= (1)  3  1  1   7    7
	*/
	
	//adjacent_difference and  plus<int>()
	/*
	first number is always be the same (constant)
  	vec1 =  1  4  5   6   13   20
	adjacent_difference(vec2)=(1),(4+1),(5+4),(6+5),(13+6),(20+13) 
    vec2= (1) 5  9  11   19   33    
	*/
	/*
	vec2.clear();
	adjacent_difference(all(vec1),back_inserter(vec2));	
	print_vector(vec2);
	
	
	vec2.clear();
	adjacent_difference(all(vec1),back_inserter(vec2),plus<int>());	
	print_vector(vec2);
	
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	//swap_ranges
	//swap_ranges(vec2.end()-2,vec2.end(),vec1.begin());
    //swap_ranges(vec2.begin(),vec2.begin()+2,vec1.end()-2);

	cout<<"vec1 ";print_vector(vec1);
	cout<<"vec2 ";print_vector(vec2);
	*/
	
	
	
	
	
	
	
	
	
	
	
	/*
	//binary search
	// the vector must be sorted first //
    sort(vec1.begin(),vec1.end());
    print_vector(vec1);
	cout<<"enter a number to return its index (binary search)"<<endl;
    int number;   cin>>number; 
	cout<<binary_search(vec1,0,sz(vec1),number)<<endl;	
	*/
	
	
	
	
	
	/*
 	 
	 //for all search and find functions with stl//
	//if a number is in the vector !=vec.end()
    //if a number not in the vector ==vec.end()
   
    //find	
	cin>>num;
	if(find(all(vec1),num)!=vec1.end())
	cout<<num<<"found"<<endl;
    
	cin>>num;
	if(find(vec1.begin(),vec1.end(),num)==vec1.end())
	cout<<num<<"not founded"<<endl;
	*/
    
	
	
	/*
	//search_n  search for conseuctive number (duplicates)
	// ex  12777    num=7  repetitians=3        index=2
	// ex  12777    num=7  repetitians=2        index=2
	// ex  12777    num=7  repetitians=4        index=0
	// ex  12233    num=3  repetitians=2        index=3
	// ex  12233    num=3  repetitians=3        index=0
	// ex  12233    num=3  repetitians=4        index=0
	// ex  12233    num=2  repetitians=3        index=0
	
	it iter;
	int number ,repeates;
	
	cout<<"enter repetitians"<<endl; cin>>repeates;
	cout<<"enter num "<<endl; cin>>number;
	iter =search_n(all(vec1),repeates,number);
    if(iter!=vec1.end())
	cout<<"(return the index) "<<iter-vec1.begin()<<endl;
	*/
	
	
	/*
	//erase and find
	cin>>num;
	vec1.erase(find(all(vec1),num));
	print_vector(vec1);
	*/


    // search  sub-vector on a vector
	/*
	//lazm ykono wara ba3d (set_intersection mo4 lazm ykono wara ba3d )
	// ex   vec1 = 1 2 3   , vec2 = 1 2 3 4 5    "sub vector from index" = 0    
    // not	 vec1 = 1 2 3   , vec2 = 1 4 2 5 3    not sub vector 
	//search for vec1 on vec 2
	//iter-vec2.begin()   dont forget it
	it iter=search(vec2.begin(),vec2.end(),vec1.begin(),vec1.end());
	if(iter!=vec2.end())
	cout<<"sub vector from index"<<iter-vec2.begin()<<endl;
	*/
	
	/*
	//search for vec 2 on vec 1
	// ex   vec1 = 1 2 3 4 5   , vec2 = 3 4 5    "sub vector from index" = 2    
	it iter=search(vec1.begin(),vec1.end(),vec2.begin(),vec2.end());
	if(iter!=vec1.end())
	cout<<"sub vector from index"<<iter-vec1.begin()<<endl;
	*/
	
	
	
	
	
	
	
	// set_intersection , set_difference ,set_union 
	// vec1 and vec2 must be sorted
	
	/*
	//set_intersection
	//return elements in vec1 and vec2 "both"
	//ex  vec1 =1 2 3 4 5   vec2 = 1 2 3     vec3= 1 2 3
	sort(all(vec1));
	sort(all(vec2));
	set_intersection(all(vec1),all(vec2),back_inserter(vec3));
	cout<<"vec 3",print_vector(vec3);
    */

    /*
	//set_difference
	//return elements in vec1 not found in vec2
	//ex vec1= 1 2 3 4 5 vec2= 3 4 5    vec3=1 2 
	sort(all(vec1));
	sort(all(vec2));
	set_difference(all(vec1),all(vec2),back_inserter(vec3));
	cout<<"vec 3",print_vector(vec3);
	*/
	
	/*
	//set_union
	//return elements in vec1 +  vec2
	//ex vec1= 1 2 3 4 5  vec2= 6 7 8     vec3=1 2 3 4 5 6 7 8 
	sort(all(vec1));
	sort(all(vec2));
	set_union(all(vec1),all(vec2),back_inserter(vec3));
	cout<<"vec 3",print_vector(vec3);
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	//lower_bound
	//vector must be sorted
	// search for the first number  greater or equal to an elment
	// ex vec1 1 2 3 4 5  search for first equal to     4 = 4       number=4  
	// ex vec1 1 2 4 4 4  search for first equal to     4 = 4       number=4  
	// ex vec1 1 2 3 5 6  search for first greater than 4 = 5       number=5  
	// ex vec1 77 2 3 5 6 search for first greater than 4 = 5 after sort(2 3 5 6 77)   number=5  
	
    sort(vec1.begin(),vec1.end()); //sort(all(vec1));
	it iter = lower_bound(vec1.begin(),vec1.end(),4);
	if(iter!=vec1.end())
	cout<<"not index"<<*iter<<endl;
	*/
	
	/*
	//upper_bound
	//vector must be sorted
	// search for the first number  greater than an elment
	// ex vec1 1 2 3 4 5  search for first equal to     4 = 5       number=4  
	// ex vec1 1 2 4 4 4  search for first equal to     4 = NULL    number=NULL  
	// ex vec1 1 2 3 5 6  search for first greater than 4 = 5       number=5  
	// ex vec1 77 2 3 5 6 search for first greater than 4 = 5 after sort(2 3 5 6 77)   number=5  
	// ex vec1 70 90 80 40 100  search for first greater than 4 =40  after sort(40 70 80 90 100)   number=40  
	sort(all(vec1));
	it iter = upper_bound(vec1.begin(),vec1.end(),4);
	if(iter!=vec1.end())
	cout<<*iter<<endl;
	*/
	
	
	//unique
	/*
	vector must be sorted
	unique return a pointer (after shifting all duplicates) of the first duplicate element 
	ex  1 1 2 2 3 (1 2 3 1 2) unique return index = 3
	
	resize function (take a number)
	vec1.resize(unique(vec1.begin(),vec1.end())-vec1.begin());
	vec1.resize(unique(return index = 3)- vec1.begin= 0 );
	unique-begin=3-0 = 3; 
	resize=3 (resize from--> begin to 3  )
	
	erase function (take a range  from...to)
	vec1.erase(unique(vec1.begin(),vec1.end()),vec1.end());
	unique return a pointer of the first duplicate element
	ex  1 1 2 2 3 (1 2 3 1 2) unique return index = 3
	
	vec1.erase(unique(from index= 3) to vec1.end());
	 */
    
	/*
	vec1.resize(unique(all(vec1))-vec1.begin());  // (take a number)
	//vec1.erase(unique(vec1.begin(),vec1.end()),vec1.end());   // (take a rang)
	print_vector(vec1);
	*/
	
	
	
	
	
	
	
	
	/*
	//next_permutation   l tbadeel fe elriada
	do
	{
		print_vector(vec1);
	}
	while(next_permutation(all(vec1)));
	*/
	
	
	
	
	
	
	return 0 ;
}
