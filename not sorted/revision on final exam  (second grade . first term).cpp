/*
// linear search one dimension array //
#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int main ()
{
    const int size=5 ; 	
	int arr[size] ;
	int counter=0,num,position;
	cout<<"enter array elements"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<endl<<"enter a number to search"<<endl;
	cin>>num;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==num)
		{
			counter ++ ;
			position=i;
			break;
		}
	}
	if(counter>0)
	{
		cout<<"number is found"<<endl;
	    cout<<"position in array :"<<position<<endl;
    }
    else cout<<"number is not found"<<endl;
	
	 
	return 0 ;
}
*/



/*
//bubble sort //
#include <iostream>
using namespace std ;
int main ()
{
	
	int arr[50],n,temp;
	cout<<"enter the size of array"<<endl;	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{                             	                  // Descending from big to small //
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	

	return 0 ;
}

*/

















/*
// sum of 2 matrcies one dimension //
#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;

int main ()
{
    const int size=5,size1=5,size2=5; 	
	int arr[size],arr1[size1],arr2[size2];
	int counter=0,num,position;
	if(size1==size2)
	{
		cout<<"enter elements of the first array "<<endl;
	for(int i=0;i<size1;i++)
	{
		cin>>arr1[i];
	}
	cout<<endl<<"enter elements of the second array "<<endl;
 	for(int i=0;i<size2;i++)
	{
		cin>>arr2[i];
	}
	for(int i=0;i<size1;i++)
	{
		arr[i]=arr1[i]+arr2[i];
	}
	}
	
	for(int i=0;i<size1;i++)
	{
		cout<<arr[i]<<endl;
	} 
	
	return 0 ;
}

*/




/*
// sum of two dimension arrays //
#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int main ()
{
	
	const int size=3,size1=3,size2=3; 	
	int arr[size][size],arr1[size1][size1],arr2[size2][size2];
	cout<<"enter elements of the first array"<<endl;
	for(int i=0;i<size1;i++)
	{
		for(int j=0;j<size1;j++)
		{
			cin>>arr1[i][j];
		}
	}
	
	cout<<"enter elements of the second array"<<endl;
	for(int i=0;i<size2;i++)
	{
		for(int j=0;j<size2;j++)
		{
			cin>>arr2[i][j];
		}
	}
	
    // adding //
	for(int i=0;i<size ;i++)
	{
		for(int j=0;j<size ;j++)
		{
			arr[i][j]=arr1[i][j] + arr2[i][j];
		}
	}
	
	
	cout<<endl<<" elements in the first array"<<endl;
	for(int i=0;i<size1;i++)
	{
		for(int j=0;j<size1;j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}	
	
	
	cout<<endl<<" elements in the second array"<<endl;
	for(int i=0;i<size2;i++)
	{
		for(int j=0;j<size2;j++)
		{
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}	
	
	cout<<endl<<"sum of first array and second array"<<endl;
	
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}	
	
	
	return 0 ;
}
*/













/* 
// product of 2 matrcies // 
#include <iostream>
using namespace std ;
int main ()
{
	int a,b,c,d;
	int arr1[10][10],arr2[10][10],arr[10][10];
	cout<<"enter the dimentions of first array (arr1) \n";
	cin>>a>>b;                      //arr1 row = a &&  arr1 coluom = b   //
	cout<<"enter the dimentions of second array (arr2) \n";
	cin>>c>>d;                     //arr2 row = c &&  arr2 coluom = d   // 
	if(b==c)
	{
		cout<<endl<<"enter elments of first array"<<endl;
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				cin>>arr1[i][j];
			}
		}
		
		
		cout<<endl<<"enter elments of second array"<<endl;
		for(int i=0;i<c;i++)
		{
			for(int j=0;j<d;j++)
			{
				cin>>arr2[i][j];
			}
		}
		
		cout<<endl<<"first array"<<endl;
		
		
			for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				cout<<arr1[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl<<"second array"<<endl;
		
		for(int i=0;i<c;i++)
		{
			for(int j=0;j<d;j++)
			{
				cout<<arr2[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		
		
		
		
		
		 for(int i=0;i<a;i++)
		 {
		 	for(int j=0;j<d;j++)
		 	{
		 	arr[i][j]=0;
		 	for(int k=0;k<c;k++)
			  {
			   arr[i][j]+=arr1[i][k]*arr2[k][j];	
			  }	
			 }
		 }
		  
	 	 cout<<"product of first array and second array"<<endl;
	 	 for(int i=0;i<c;i++)
		{
			for(int j=0;j<d;j++)
			{
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	 	 
		
	}
	 
	else 
	cout<<"invalid"<<endl;
	 
	 
	return 0 ;
}
*/








/*
// max and min in array //
#include <iostream>
using namespace std ;
int main ()
{
	const int size =10;
	int arr[size],position_max=0,position_min=0;
	cout<<"enter elments of the array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}

	int min=arr[0];

    for(int i=0;i<size;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		   position_min=i;
		 }
	}	 
	
   cout<<"the smallest element is "<<min<<endl;
   cout<<"position : "<<position_min<<endl;	
	
	
	int max=arr[0];
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		   position_max=i;
		 }
	}
	
	cout<<"the largest element is"<<max<<endl;
   cout<<"position :"<<position_max<<endl;	

	return 0 ;

}

*/







/*

// stack //
#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
const int size =6 ;
int top =-1;
int stack_array[size], number;


bool isfull(int top)
{
   if(top==size-1)
	return true ;

	else 
	return false ;
}


bool isempty(int top)
{
	if(top==-1)
	return true ;
	
	else 
	return false ;
}

void push(int number)
{
	
if(isempty(top)==true||isfull(top)==false)
     {
     	top++;
    	stack_array[top]=number;
	 }
	 else if (isfull(top)==true)
	 cout<<"stack overflow"<<endl;
}

void pop()
{
 if(isempty(top)==false||isfull(top)==true)
 {
  int x;
  x=stack_array[top];
  top--;
     cout<<"poped number"<<x<<endl; 
 }
 else 
 cout<<"stack is empty"<<endl;
 
 
}
 

void display()
{
	cout<<"stack is :"<<endl;
	for(int i=top;i>=0;i--)
	{
		cout<<stack_array[i]<<endl;
	}
}


int main ()
{
	cout<<"push elements in stack "<<endl;
   for(int i=0;i<size ;i++)	
	{
		cin>>number;
    	push(number);
	}
	
	
	display();
	
	
	
	
	cout<<"enter how many elements you want pop from stack "<<endl;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		pop();
	}
	
	
	display();
	 
	
	
	return 0 ;
}
*/















/*
// Queue //
#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
const int size =6 ;
int front =-1,rear=-1;
int arr_queue[size];


bool isfull(int rear)
{
	if(rear==size-1)
     return true ; 
     else
     return false ;
}

bool isempty(int front)
{
	if(front==-1||front>rear)
	return true ;
	else return false ;
	
}


void enqueue(int number)
{
if(isfull(rear)==false)	
{
	rear ++ ;
    arr_queue[rear]=number; 
}
else if(isfull(rear))                  // if true //
cout<<number<<" invalid "<<"cant enqueue any more items"<<endl;
}

void dequeue()
{
 	  	int x ;
      	front ++ ;
	    x=arr_queue[front];
	    cout<<x<<" dequeue from the queue"<<endl;
	    
	  if(isempty(front))
	 cout<<"queue is empty"<<endl;
	 
 
}

void display()
{
	for(int i=front+1;i<=rear;i++)
	{
		cout<<arr_queue[i]<<" " ;
	}
	cout<<endl;
}


int main ()
{

int number,n,z;
cout<<"enter how many elments in queue "<<endl;
cin>>n;
cout<<endl<<"enter elments in queue "<<endl;
for(int i=0 ;i<n;i++)
{
	cin >> number ;
	enqueue(number);
}

display ();

cout<<endl<<endl<<"enter how many elments you need to  dequeue "<<endl;
cin>>z;

for(int i=0;i<z;i++)
{
	dequeue();
}

cout<<endl<<endl;
display();


return 0 ;
}
 
*/

















 /*
 //  circular queue    //
#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int front=-1,rear=-1;
const int size=6;
int c_queue[size];

void enqueue(int number)
{

if (front==(rear+1)%size)     //    (front==0&&rear>size-1)
{
cout<<"circular queue is over flow"<<endl;
cout<<"can't enqueue"<<endl;
}
	if(front==-1&&rear==-1)
	{
		front ++ , rear ++ ;
		c_queue[rear]=number;
	}

	else
	{
		rear=(rear+1)%size;
		c_queue[rear]=number;
	}

}

void dequeue()
{
	int x;
	x=c_queue[front];
	front=(front+1)%size;
	cout<<x<<" is dequeued "<<endl;
	if((front==-1&&rear==-1)||front>rear)
	cout<<"cirqular queue is under flow"<<endl;
}
void display()
{
	for(int i=front;i<=rear;i++)
	{
		cout<<c_queue[i]<<" ";
	}
	cout<<endl;
}
int main ()
{
/*
enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
enqueue(5);
enqueue(6);
display();
dequeue();
display();
enqueue(200);
enqueue(2248);
display();
  
 
 
 
 
	int n,x ;
  
	cout<<"enter how many item you need to enqueue"<<endl;
	cin>>n;
	for(int j=0;j<n;j++)
	{
		cin>>x;
		enqueue(x);
	}
 
 	display();
	cout<<endl;
	
	cout<<"enter how many item you need to dequeue"<<endl;
	cin>>n;
	for(int z=0;z<n;z++)
	{
		dequeue();
	}
	
	
	display();
	cout<<endl;
 

	
return 0 ;	
}
 */
 
 
 
 /*
 #include <iostream>
 #include <string>
 #include <algorithm>
 using namespace std ;
 const int size =6;
 int c_queue[size],front=-1,rear=-1;

 bool isfull()
 {
 	if(front==(rear+1)%size)
 	return true;
 	else 
 	return false ;
 }

 bool isempty( )
 {
 	if((front==-1&&rear==-1)||front>rear)
 	return true;
 	else
 	return false ;
 }
 void enqueue(int number)
 {

/*
//	if(rear==-1&&front ==-1)
 //	{
 //		rear++,front++;
 //		c_queue[rear]=number;
//	 }

 
 	if(isfull()==false)
 	{
 		rear=(rear+1)%size ;
 		c_queue[rear]=number ;
	 }
 	
	 else  
	 cout<<endl<<number<<" cant enqueue "<<endl;  
    }
	 	 
	 	 
 void dequeue()
 {
 	if(isempty())
 	cout<<"queue is over flow"<<endl;
 	else
 	{
 		int Z;
 		Z=c_queue[front];
 		front =(front+1)%size ;
	}
}

void display()
{
	for(int i=front;i<=rear;i++)
	cout<<c_queue[i]<<" ";

	cout<<endl<<endl;
 } 

int main ()
{
	 //int x,new_num;
	// cout<<"enter how many number you want enqueue"<<endl,cin>>x;
 
enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
enqueue(5);
enqueue(6);

display();
dequeue();
display();
enqueue(200);
enqueue(2248);
display();

	
	return 0 ;
}

*/





/*
// stack using linked list  //
#include <iostream>
using namespace std ;
struct node
{
int data ;
node *next;	
};
node *head;
void add_to_begin ()
{
	 
	cout<<"enter number to add in list"<<endl;
	
    node *temp=new node;
//	node *temp;
//	temp=new node ;
	cin>>temp->data;
	temp->next=head;
	head=temp;
}

void delete_from_begin()
{
	if(head==NULL)
	{
		cout<<"list is empty"<<endl;
	}
	
	else
	{
	int x;
	node *temp=head;
	x=head->data;
	head=head->next;
	delete temp;	
	cout<<x<<"is deleted from the list"<<endl;	
	}
	}



void traverse()
{
	if(head==NULL)
	{
		cout<<"list is empty"<<endl;
	}

   else
   {
   	
   	node *temp=head;
   	//node *temp;
	//temp=head;
	   while(temp!=NULL)
   	{
   		cout<<temp->data<<endl;
   		temp=temp->next;
    }
    }	
	}



int main ()
{
	
   	add_to_begin();
	add_to_begin();
	add_to_begin();
	add_to_begin();
	add_to_begin();
	add_to_begin();
	
	cout<<endl<<endl;
	
	
	traverse();
	
	
	cout<<endl<<endl;
	
	
	delete_from_begin();
	delete_from_begin();
	
	
	cout<<endl<<endl;
	
	
	traverse();
	
	
	return 0 ;
	
}

*/
















/*
// stack using linked list  //
#include <iostream>
using namespace std ;
struct node
{
int data ;
node *next;	
};
node *head;
void add_to_begin ()
{
	 
	cout<<"enter number to add in list"<<endl;
	
    node *temp=new node;
//	node *temp;
//	temp=new node ;
	cin>>temp->data;
	temp->next=head;
	head=temp;
}





void delete_from_begin()
{
	if(head==NULL)
	{
		cout<<"list is empty"<<endl;
	}
	
	else
	{
	int x;
	node *temp=head;
	x=head->data;
	head=head->next;
	delete temp;	
	cout<<x<<"is deleted from the list"<<endl;	
	}
	}



void traverse()
{
	if(head==NULL)
	{
		cout<<"list is empty"<<endl;
	}

   else
   {
   	
   	node *temp=head;
   	//node *temp;
	//temp=head;
	   while(temp!=NULL)
   	{
   		cout<<temp->data<<endl;
   		temp=temp->next;
    }
    }	
	}



int main ()
{
	
   	add_to_begin();
	add_to_begin();
	add_to_begin();
	add_to_begin();
	add_to_begin();
	add_to_begin();
	
	cout<<endl<<endl;
	
	
	traverse();
	
	
	cout<<endl<<endl;
	
	
	delete_from_begin();
	delete_from_begin();
	
	
	cout<<endl<<endl;
	
	
	traverse();
	
	
	return 0 ;
	
}

*/













#include <iostream>
using namespace std ;
struct node
{
int data ;
node *next;	
};
node  *front ,*rear ;
void enqueue ()
{
	int number;
   	cout<<"enter number to add in list"<<endl;
	cin>>number ;
	node *temp;
	temp=new node;
	temp->data=number; 
	temp->next=NULL;

	 if(rear==NULL||front==NULL)
	 {
	 	front=temp;
	 }
	 
	 else
	 {
	 	rear->next=temp;
	 	rear=temp;
	 }
	  
}

void dequeue()
   {
   	node *dtemp;
   	dtemp=new node ;
   	dtemp=front;
   	cout<<dtemp->data<<"  is deleted from queue"<<endl;
   	front=front->next;
   	delete dtemp ;
 	}



void display()
{
	if(front==NULL||rear==NULL)
	{
		cout<<"list is empty"<<endl;
	}

   else
   {
   	
   	node *temp;
   	//temp=new node;
   	 temp=front;
   	  while(temp!=NULL)
   	{
   		cout<<temp->data<<endl;
   		temp=temp->next;
    } 
	 
    }	
	}



int main ()
{
	
   	enqueue();
	enqueue();
	enqueue();
	enqueue();
	enqueue();
	enqueue();
	
	cout<<endl<<endl;
	
	
 	display();
	
	
	cout<<endl<<endl;
	
	
 	dequeue();
 	dequeue();
	cout<<endl<<endl;
	
	
	display();
	
	
	return 0 ;
	
}





















 /*
 // linked list & erorr in delete node !!!  // 
#include <iostream>
using namespace std ;
struct node
{
int data ;
node *next;	
};
node *head,*prev;
node *current=head;
void add_to_begin ()
{
	 
	cout<<"enter number to add in list"<<endl;
	
    node *temp=new node;
//	node *temp;
//	temp=new node ;
	cin>>temp->data;
	temp->next=head;
	head=temp;
}

 void delete_node()
 {
 	int number;
 	cout<<"enter number to delete"<<endl;
	 cin>>number;
 
 	// one node in the list //
	 if(number==head->data&& head->next==NULL )
 	{
 	 head=NULL;
 	}
 
 
 
 	// delete the first node in the list // 
 	if(number==head->data)
 	{
 	  current=head;
	  head =current->next;   //head=head->next ;  //
	  delete current;
	}
	// delete last node //
	if(current->next==NULL&&number==prev->data)
	{
		delete current;
		
	}
	
	else
	{
		current=head;
		//prev=NULL;
		while(number!=current->data)
		{
			prev=current;
			current=current->next;
			if(number==current->data)
			{
				prev=current->next;       
				delete current ;
				break;
			}
		}
			}
}
	
 
 
 

void traverse()
{
	if(head==NULL)
	{
		cout<<"list is empty"<<endl;
	}

   else
   {
   	
   	node *temp=head;
   	//node *temp;
	//temp=head;
	   while(temp!=NULL)
   	{
   		cout<<temp->data<<endl;
   		temp=temp->next;
    }
    }	
	}



int main ()
{
	
   	add_to_begin();
	add_to_begin();
	add_to_begin();
	add_to_begin();
	add_to_begin();
	add_to_begin();
	
	cout<<endl<<endl;
	
	
	traverse();
	
	
	cout<<endl<<endl;
	
	delete_node();
	delete_node();
	
	cout<<endl<<endl;
	
	
	traverse();
	
	
	return 0 ;
	
}


*/




















