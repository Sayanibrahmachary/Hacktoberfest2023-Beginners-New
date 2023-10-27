#include <stdio.h>
#define max_size100 

void push(int a[],int top ,int value,int max_size)
{
	if(top==max_size-1)
	{
		printf("Arrey is full you can not input anythink");
		return;
	}
	else{
		top=top+1;
		a[top]=value;
	}
	
}

void pop(int a[],int top,int *size)
{
	int item;
	if(top==-1)
	{
		printf("Arrey is empty you can not input anythink");
		return;
	}
	
	else
	{
		item=a[top];
		top=top-1;
	}
}

int peek(int a[],int top)
{
	int item;
	
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		item=a[top];
		printf("%d",item);
	}
}
void display(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
}
int main() {
	int a[100];
	int size;
	int choice,value,top=-1,item;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	do
	{
		printf("\nMenu:-");
		printf("1) Push\n");
		printf("2) Pop\n");
		printf("3) Peek\n");
		printf("4) Display\n");
		printf("5) Exit from the arrey\n");
		
		printf("Enter you choose:\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: 
				printf("Enter the value:");
				scanf("%d",&value);
			
				push(a,top,value,100);
				display(a,size);
				break;
			
			case 2:
				
				pop(a,top,&size);
				display(a,size);
				break;
			
			case 3:
				peek(a,top);
				break;
			case 4:
				display(a,size);
				break;
			
			case 5:
				printf("Exiting th program\n");
				break;
			
			default:
				printf("Invalid choice.Pleace try again");
				break;
		}
	}
		while(choice!=5);
	return 0;
}





