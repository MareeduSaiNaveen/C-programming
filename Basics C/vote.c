#include<stdio.h>
int main(){
	int age;
	printf("Enter a user age to check : ");
	scanf("%d",&age);

	if(age > 18){
		printf("Eligible\n");
	}else if(age == 18 ){
		printf("New Eligible\n");
	}else{
		printf("Ineligible\n");
	}
	age >= 18 ? printf("Eligible\n"):printf("Ineligible\n");

	if(age == 18){
		printf("New Eligible\n");
	}else{
		age > 18 ? printf("Eligible\n"):printf("Ineligible\n");
	}
	return 0;
}
