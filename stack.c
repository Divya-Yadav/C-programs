//implementation of stacks using array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define maxsize 10		//maximum size of array is defined
int a[maxsize];
int top=-1, x;			//top of array initialised 
						        //x is the integer to be inserted in stack
int push()
{
	if(top==maxsize-1)
	printf("\n***stack overflow***");		//sets limit for stack
	else
	{	
		top++;
		a[top]=x;					//assigns value of x to the top of array
		printf("the entered element is	:	%d\n",x);		//value displayed at the top position
	}	
}
int pop()
{
	if(top==-1)						//checks condition
	printf("\n Nothing to pop\n ");
	else
	{
		printf("The popped element is	:	%d",a[top]);		//deletes element from top position
		top--;													//points to current top position after deleting the element
	}
	printf("\n");	
}
int traverse()
{
	printf("\n The stack is	:	");
	for(int i=0;i<=top;i++)
	{
		printf("%d\t",a[i]);	//prints all values of array 
		
	}
}
int is_empty()
{
	if(top==-1)
	printf("\nEmpty stack");
	else
	printf("\nNOT EMPTY\n");
	traverse();					//traverse function is called to display the non-empty stack
}
int top_element()
{
	printf("\n The top element is	:	%d",a[top]);
}
int main()
{
	int s;
	for(;;)			//loop to ask the user for his choice until he wants to exit
	{
		printf("\n	1)push\n	2)pop\n	3)is empty\n	4)top element\n	5)traverse\n	6)exit");
		printf("\n\nENTER A CHOICE	:	");	
		scanf("%d",&s);	
		switch(s)
		{
			case 1: printf("\nEnter the element to push	:	");	
					    scanf("%d",&x);
					    push();
					break;					
			case 2: pop();
					break;
			case 3: is_empty();
					break;
			case 4: top_element();
					break;
			case 5: traverse();
					break;
			case 6: exit(0);
					break;
			default: printf("\n**Error**\n");
		}
	}
	return 0;
}
