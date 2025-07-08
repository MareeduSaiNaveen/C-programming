#include<stdio.h>
int primefactor(int num){
	int i;
	for(i = 2; i <= num; i++){
		while(num % i == 0){
			printf("%d ",i);
			num /= i;
		}
	}
	printf("\n");
}
int main(){
	int num;
	printf("enter a number : ");
	scanf("%d",&num);
	primefactor(num);
	return 0;
}
