#include<stdio.h>
void myfun(int *arr, int size){
	int i;
	for(i = 0; i < size; i++)
	{
		if(*(arr + i) == 4)
			*(arr + i) = 0;
	}
}
int main()
{
	int arr[5] = {1,2,3,4,5};

	int n = sizeof(arr)/sizeof(arr[0]);
	myfun(arr,n);

	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
