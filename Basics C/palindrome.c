#include<stdio.h>
void palindrome(int long *n){
	long int num, rem, rev = 0;
	num = *n;
	while(num != 0){
		rem = num % 10;
		rev = rev*10+rem;
		num /= 10;
	}
	if(*n == rev)
		printf("Given numbr is palindrome\n");
	else
		printf("Given number is not palindrome\n");
}
int main(){
	long int num;
	printf("Enter a number to chech palidrome : ");
	scanf("%ld",&num);
	palindrome(&num);
	return 0;
}
