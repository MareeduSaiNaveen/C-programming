#include<stdio.h>
extern int a;
extern int b;
int fun2(){
	printf("fun2 = %d %d\n", a, b);
	a = a+10;
	b = b+10;
	return 0;
}
