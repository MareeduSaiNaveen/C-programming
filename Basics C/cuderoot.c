#include<stdio.h>
#include<math.h>
double squareRoot(int x){
	double sq;
	sq = sqrt(x);
	return sq;
}
double cudeRoot(int y){
	double cb;
	cb = cbrt(y);
	return cb;
}
int main(){
	int x,y;

	printf("Enter number to do squreroot : ");
	scanf("%d",&x);

	printf("Enter number to do cude : ");
	scanf("%d",&y);

	printf("The squareRoot of %d is : %f\n",x,squareRoot(x));

	printf("The cudeRoot of %d is : %f\n",y,cudeRoot(y));
}
