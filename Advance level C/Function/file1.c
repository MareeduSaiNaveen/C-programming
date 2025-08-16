#include<stdio.h>
int a = 10;
int b = 10;
void fun2();
void fun1(){
	int d = 10;
	static int c = 10;
	printf("fun1 = %d %d %d %d\n", a, b, c, d);
	d = d + 10;
	c = c + 10;
}int main(){
	fun1();
	fun1();
	fun2();
	fun2();
	fun1();
	return 0;
}
