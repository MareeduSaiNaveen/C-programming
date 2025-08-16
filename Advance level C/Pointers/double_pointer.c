#include<stdio.h>
int main(){
	int a = 10;
	int *p = &a;
	int **pp = &p;
	printf("a = %d\n*p = %d\n**pp = %d\n", a, *p, **pp);
	printf("&a = %p\np = %p\npp = %p\n&pp = %p\n*pp = %p\n", &a, p, pp, &pp, *pp);
}
