// different operations on array
#include<stdio.h>
#include<conio.h> 

int num,input[10],rev[10],n,i,j,sort;
int array()
{
	printf("Enter the size of string:\n ");
	scanf("%d",&n);
	
	printf("Enter the array:\n ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&input[i]);
	}
}
int reverse()
{
	for(i=n-1,j=0;i>=0;j++,i--)
	{
		rev[j]=input[i];
	}
	printf("\nThe reverse of entered array is: \n");
	
	for(i=0;i<n;i++)
	{		
		printf("%d\n",rev[i]);
	}
	
}
int max()
{	
	num=0;
	for(i=1;i<n;i++)
	{
		if(input[i]>num)
		{
			num=input[i];
		}
	}
	printf("\n\nLargest number is: %d",num);	
}
int min()
{	
	
	for(i=0;i<n;i++)
	{
		if(input[i]<num)
		{
			num=input[i];
		}
	}
	printf("\n\nSmallest number is: %d\n",num);	
}
int sorting()
{
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (input[i]>input[i+1])
			{
				sort=input[i];
				input[i]=input[i+1];
				input[i+1]=sort;
			}
		}
	}
	printf("\nThe sorting order: \n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",input[i]);
	}
}

int main()
{
	array();	
	reverse();
	max();
	min();
	sorting();
	return 0;
}
