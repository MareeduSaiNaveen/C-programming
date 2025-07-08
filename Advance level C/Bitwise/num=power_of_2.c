#include<stdio.h>
int main(){
	int data, num, result;
	printf("Enter a data : ");
	scanf("%d", &data);
	num = data-1;
	result = data & num;
	if(result){
		printf("Given number %d is not power of 2\n", data);
	}else{
		printf("Given number %d is power of 2\n", data);
	}return 0;
}
