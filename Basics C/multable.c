#include<stdio.h>
int main(){
	int x,y,mul;
	printf("Enter number to form table : ");
	scanf("%d",&y);

	for(x = 1; x <= 10; x++){
		mul = y * x;
		printf("%d * %d = %d\n",y,x,mul);
	}
	return 0;
}
