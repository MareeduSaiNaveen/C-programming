#include<stdio.h>
int main(){
	int num, i;
	printf("Enter a number : ");
	scanf("%d",&num);
	for(i = 1; i <= num; i++){
		if(num / i == i){
			printf("Sq of %d is %d\n",num, i);
		}
	}return 0;
}
