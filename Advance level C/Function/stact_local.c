#include<stdio.h>
int static a = 15;
int fun(){
	static int a = 0;
	printf("a = %d\n", a);
	a++;
}int main(){
	fun();
	fun();
	fun();
	printf("a = %d\n", a);
	return 0;
}
