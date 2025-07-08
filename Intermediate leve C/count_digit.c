#include<stdio.h>
int main(){
	int y, i = 0;
	printf("Enter a number : ");
	scanf("%d",&y);
	while(y != 0){
		y = y / 10;
		i++;
	}
	printf("%d\n",i);
	return 0;
}
