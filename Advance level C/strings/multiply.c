#include<stdio.h>
#include<stdlib.h>
void main(){
	int mul, num1, num2;
	char mult[50], str1[50], str2[50];
	printf("Enter a number 1 : ");
	fgets(str1, sizeof(str1), stdin);
	printf("Enter a number 2 : ");
	fgets(str2, sizeof(str2), stdin);
	sscanf(str1, "%d", &num1);
	sscanf(str2, "%d", &num2);
	mul = num1 * num2;
	sprintf(mult, "%d", mul);
	printf("mult = %s\n", mult);
}
