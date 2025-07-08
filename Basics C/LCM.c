#include<stdio.h>
int main(){
	int num1, num2, max, lcm, n1, n2;
	printf("Entra number 1 : ");
	scanf("%d",&num1);
	printf("Enter a number 2 : ");
	scanf("%d",&num2);
	n1 = num1;
	n2 = num2;
	max = num1 > num2? num1 : num2;
	lcm = max;
	while((lcm % num1 != 0) || (lcm % num2 != 0)){
		lcm += max;
	}
	printf("Lcm of %d and %d is %d\n",n1, n2, lcm);
}
