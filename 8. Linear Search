#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int a[n],val,i,res;
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the value to be searched:");
	scanf("%d",&val);
	for(i=0;i<n;i++)
	{
		if(a[i]==val)
		{
			res=-1;
			break;
		}
	}
	if(res==-1)
	{
		printf("The element is present in the array at position %d",i+1);
	}
	else
	{
		printf("The element is not present in the array");
	}
}
