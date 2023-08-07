#include <stdio.h>
int main()
{
	int n,i,search,arr[100]
	printf("enter a number of elements:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(int i=0;i<n;i++)
	scanf("%d",arr[i]);
	printf("enter the search element:");
	scanf("%d",&search);
	for(int i=0;i<n;i++)
	if(arr[i]==search);
	printf("the search element is found in the %d position",search,i+1);
	break;
	else
	printf("the search element is not found");
	return 0;
	
	
	
}
