#include<stdio.h>
int main(){
	double result1, result, base, expo;

	printf("Enter a base number : ");
	scanf("%lf",&base);

	printf("Enter a expo number : ");
	scanf("%lf",&expo);

	int i=1;
	result = base;

	printf("Method 1\n");
	while(i < expo){
		result *= base;
		i++;
	}
	printf("%lf power of %lf is %lf\n",base,expo,result);
	
	result1 = base;

	printf("Method 2\n");
	while(expo != 1){
		result1 *= base;
		expo--;
	}
	printf("power is %lf\n",result1);
	return 0;
}
