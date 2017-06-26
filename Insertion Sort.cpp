#include<stdio.h>
#include<malloc.h>
int n,*a;
void read()
{
	printf("Enter term\n");
	scanf("%d",&n);
}

void read_arr()
{
	int i;
	a=(int*)malloc((n+1)*sizeof(int));
	*(a+0)=-32786;
	printf("Create list\n");
	for(i=1;i<=n;i++)
	{
		printf("Enter element\n");
		scanf("%d",(a+i));
	}
}
void sort()
{
	int i,j,t;
	for(i=1;i<=n;i++)
	{
		j=i;
		while(*(a+j)<*(a+(j-1)))
		{
			t=*(a+j);
			*(a+j)=*(a+(j-1));
			*(a+(j-1))=t;
			j--;
		}
	}
}
void show()
{
	int  i;
	for (i=1;i<=n;i++)
	{
		printf("%d ",*(a+i));
	}
}
int main()
{
	read();
	read_arr();
	printf("The unsorted list\n");
	show();
	sort();
	printf("\n The sorted list is\n");
	show();
}
