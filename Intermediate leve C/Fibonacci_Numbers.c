#include<stdio.h>
int main(){
	int y, c, i;
	printf("Enter a number : ");
	scanf("%d",&y);
	int a = 1, b = 1;
	for(i = 1; i < y; i++){
		c = a + b;
		printf("%d ",c);
		a = b;
		b = c;
	}printf("\n");
	return 0;
}
