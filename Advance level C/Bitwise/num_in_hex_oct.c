#include<stdio.h>
int main(){
	unsigned int data;
	printf("Enter number in decimal : ");
	scanf("%d", &data);
	printf("Given data in Hexadicmal : 0x%x\n", data);
	printf("Given data in octal : 0%o\n", data);
	return 0;
}
