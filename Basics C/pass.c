#include<stdio.h>
void swap(int *x,int *y){
	int temp;
	temp = *x;
*x = *y;
	*y = temp;
}
int main()
{
	int a,b;

	a = 10;
	b = 20;

	printf("%d is the value of a and %d is the value of b before swap\n",a,b);

	swap(&a, &b);

	printf("%d is the value of a and %d is the value of b after swap\n",a,b);

	return 0;
}
