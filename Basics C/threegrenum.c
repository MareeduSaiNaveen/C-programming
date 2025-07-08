#include<stdio.h>
int main(){
	int x,y,z;

	printf("Enter a frist number : ");
	scanf("%d",&x);

	printf("Enter a seconed number : ");
	scanf("%d",&y);

	printf("Enter a three number : ");
	scanf("%d",&z);

	if(x == y && y == z)
		printf("Three numbers are eqail\n");
	else if(x > y && x > z)
		if(y == z)
			printf("%d and %d are equail and %d is greater then other\n",y,z,x);
		else
			printf("%d is greater then other two numbers\n",x);
	else if(y > x && y > z)
		if(x == z)
			printf("%d and %d are equail and %d is greater then other\n",x,z,y);
		else
			printf("%d is greater then other two numbers\n",y);
	else if(z > x && z > y)
		if(y == x)
			printf("%d and %d are equail and %d is greater then other\n",x,y,z);
		else
			printf("%d is greater then other tow numbers\n",z);
	else if(x == y || x == z || y == z )
		if(x == y)
			printf("%d and %d are eqail and greater numbers\n",x,y);
		else if(x == z)
			printf("%d and %d are equail and greater numbers\n",x,y);
		else
			printf("%d and %d are equial abd greater numbers\n",y,z);
	else
		("Program have erros\n");
	return 0;
}
