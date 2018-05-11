#include <iostream>
using namespace std ;
struct node
{
	int id;	
	string name;
	node *next;
};

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
	for(display;display!=NULL;display=display->next)
	{
		cout<<display->id<<" "<<display->name<<"   ";
	}
	cout<<endl<<"head "<<head->id<<endl;
	
	
	
	node *temp=new node;
	cout<<"enter new node"<<endl;
	cout<<"enter id ", 		cin>>temp->id;
	cout<<"enter name ",	cin>>temp->name;
	
	cout<<"after which node ? ",  cin>>n;
	
	node *explorer1=head;
	node *explorer2=NULL;
	for(explorer1;explorer1!=NULL;explorer1=explorer1->next)
	{

		if(explorer1->id==n)
		{
			explorer2=explorer1;
			explorer1=explorer1->next;
			explorer2->next=temp;
			temp->next=explorer1;
			break ;
		}	
		explorer2=explorer1;
	} 
	
	
	

	
	
	for(display=head;display!=NULL;display=display->next)
	{
		cout<<display->id<<" "<<display->name<<"   ";
	}
	
	return 0 ;
}
