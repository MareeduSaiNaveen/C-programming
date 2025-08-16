#include<stdio.h>
int add(int a, int b){
	int c = a + b;
	return c;
}int main(){
	int a = 10, b = 20;
	int (*fptr)(int, int) = add;
	//fptr = add;
	printf("%d\n", fptr(a, b));
	return 0;
}
