#include<stdio.h>
int prime(int *e){
	int i, count = 0;
	for(i = 1; i <= *e; i++){
		if(*e % i == 0){
			count++;
		}
	}
	if(count == 2){
		printf("%d is prime number\n",*e);
	}
	return 0;
}
int main(){
	int i, s, e;
	printf("Enter a range stating number : ");
	scanf("%d",&s);

	printf("Enter a range to ending number : ");
	scanf("%d",&e);
	if(s > e){
		printf("given range is invalid");
		return 1;
	}
	for(i = s; i <= e; i++){
		prime(&i);
	}
	return 0;
}
