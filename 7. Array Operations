#include<stdio.h>
void main()
{
	int array[50],position,c,n,value;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&array[c]);
	}
	printf("Please enter the location where you want to insert a new element:");
	scanf("%d",&position);
	printf("Please enter the value:");
	scanf("%d",&value);
	for(c=n-1;c>=position-1;c--)
	{
		array[c+1]=array[c];
	}
	array[position-1]=value;
	printf("Resultant array is: ");
	for(c=0;c<=n;c++)
	{
		printf("%d ",array[c]);
	}
	
	printf("\nEnter the location where you wish to delete element:");
	scanf("%d",&position);
	if(position>=n+1)
	{
		printf("Deletion not possible");
	}
	else
	{
		for(c=position-1;c<n-1;c++)
		{
			array[c]=array[c+1];
		}
		printf("Resultant array is: ");
		for(c=0;c<n-1;c++)
		{
			printf("%d ",array[c]);
		}
	}
}
