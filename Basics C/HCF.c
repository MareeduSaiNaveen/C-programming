#include<stdio.h>
void HCF(int num1, int num2){
	int i, num, final;
	num = num1 > num2? num1: num2;
	for(i = 2; i <= num; i++){
		if(num1 % i == 0 && num2 % i == 0){
			final = i;
		}
	}
	printf("HCF of %d and %d is %d\n",num1, num2, final);
}
int main(){
	int num1, num2;
	printf("Enter a number 1 : ");
	scanf("%d",&num1);
	printf("Enter a number 2 : ");
	scanf("%d",&num2);
	HCF(num1,num2);
	return 0;
}
