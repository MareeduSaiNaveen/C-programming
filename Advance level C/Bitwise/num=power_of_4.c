#include<stdio.h>
int main(){
	int data, count;
	printf("Enter a data : ");
	scanf("%d", &data);
	if(data == 0){
		count = 0;
	}else if(data & (data - 1)){
		count = 0;
	}else if(data & 0x55555555 == 0){
		count = 0;
	}else{
		count = 1;
	}if(count){
		printf("Given number is power of 4 : %d\n", data);
	}else{
		printf("Given number is not power of 4 : %d\n", data);
	}return 0;
}
