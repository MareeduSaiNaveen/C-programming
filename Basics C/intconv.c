#include<stdio.h>
int main(){
	int val = 20;
	printf("decimal value : %d\n",val);

	int vbl = 0xF008;
	printf("hexa decimal value using 0x x : 0x%x\n",vbl);
	printf("hexa decimal value using x : %x\n",vbl);

	int vcl = 030;
	printf("octal value using 0 o : 0%o\n",vcl);
	printf("octal value using o : %o\n",vcl);

	return 0;
}
