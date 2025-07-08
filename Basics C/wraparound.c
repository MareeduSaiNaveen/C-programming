#include<stdio.h>
int main(){
	char ch = 67;

	printf("ascii value : %c\nascii char : %d\n",ch,ch);

	char val = 130;
	printf("130 of char : %d\n",val);

	char va1 = -128;
	va1 = va1 - 1;
	printf("-128 - 1 of char : %d\n",va1);
	
	char va2 = 0;
	va2 = va2 - 1;
	printf("0 - 1 of char : %d\n",va2);
}
