#include<stdio.h>
int main(){
	int num;
	printf("Enter a number : ");
	scanf("%i",&num);

	printf("decimal with d %d\n",num);
	printf("Hexadecimal with x 0x%x\n",num);
	printf("Hexadecimal with X 0X%X\n",num);
	printf("octal with o 0%o\n",num);
}
