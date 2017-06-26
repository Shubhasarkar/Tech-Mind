#include<stdio.h>
#include<malloc.h>
int *stack,size,top;
void fun()
{
	printf("Enter size of stack");
	scanf("%d",&size);
	stack=(int*)malloc(sizeof(int));
	size=size-1;
	top=-1;
}

void push()
{
	int element;
	if(top==size)
	{
		printf("overflow\n");
	}
	else
	{top=top+1;
printf("Enter an element\n");
scanf("%d",&element);
stack[top]=element;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("underflow\n");
	}
	else
	{
		printf("The element %d is deleted",stack[top]);
		top=top-1;
	}
}

void show()
{
	int i;
	printf("Now the stack is \n");
	if(top=-1)
	{
		printf("top of stack is=%\n",stack[top]);
	}
}
int main()
{
	int p;
	fun();
	printf("\n press 1 for push\n");
	printf("press 2 for pop\n");
	scanf("%d",&p);
	while(p!=3)
	{
		if(p==1)
		{
			push();
			show();
		}
		else
		if(p==2)
		{
			pop();
			show();
		}
		else
		{
			printf("You chose wrong option\n");
		}
		printf("\n press 1 for push\n");
		printf("press 2 for pop\n");
		printf("press 3 for exit\n");
		scanf("%d",&p);
	}
}
