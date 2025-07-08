#include<stdio.h>
int main(){
	int x,y;

	printf("Enter a frist number : ");
	scanf("%d",&x);
	
	printf("Enter a sencond number : ");
	scanf("%d",&y);

	if(x == y)
		printf("Both number aree equal\n");
	else
		(x > y)? printf("%d number is greatear\n",x): printf("%d number is grater\n",y);
}
