#include<stdio.h>
int main(){
	int i = 1, count = 0, num;
	printf("Enter a number : ");
	scanf("%d",&num);
	while(i <= num){
		if(num % i == 0){
			count++;
		}i++;
	}if(count == 2){
		printf("Given number is prime\n");
	}else{
		printf("Given number is not prime number\n");
	}return 0;
}
