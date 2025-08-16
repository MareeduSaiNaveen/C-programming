#include<stdio.h>
int factorial(int a){
	int fact;
	printf("a = %d\n", a);
	if(a == 1){
		printf("After stack frame distroying one by one\n");
		return 1;
	}else{
		fact = a * factorial(a-1);
		printf("a = %d\n", a);
	}return fact;
}int main(){
	int num, f;
	printf("Enter a factorial : ");
	scanf("%d", &num);
	f = factorial(num);
	printf("f = %d\n", f);
	return 0;
}
