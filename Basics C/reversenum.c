#include<stdio.h>
int revers(long int *n){
	long int rem, rev;
	long int num = *n;
	while(num != 0){
		rem = num % 10;
		rev = rev*10+rem;
		num /=10;
	}
	printf("%ld reveresed number\n",rev);
}
int main(){
	long int num;
	printf("Enter a number : ");
	scanf("%ld",&num);
	revers(&num);
	return 0;
}
