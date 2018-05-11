#include <iostream>
using namespace std ;
struct node
{
	int id;	
	string name;
	node *next;
};
/*
node *head=NULL;
void traversal()
{
	node *display=head;
	while(display!=NULL)
	{
		cout<<endl<<display->id<<" "<<display->name;
		display=display->next;
	}
}
*/

int main ()
{
	int n;
	cin>>n;
	node *head=NULL;
	for(int i=0;i<n;i++)
	{
		node *temp=new node;
		cin>>temp->id;		cin>>temp->name;
		temp->next=head;
		head=temp;
	}
	

	node *display=head;

	
	/*
	//first way to display
	for(display;display!=NULL;display=display->next)
	{
		cout<<endl<<display->id<<" "<<display->name;
	}
	*/
	
	
	/*
	//second way to display
	while(display!=NULL)
	{
		cout<<endl<<display->id<<" "<<display->name;
		display=display->next;
	}
	*/
	
	/*
	//third way to display
	traversal();
	*/
	
	
	
	
	return 0 ;
}
