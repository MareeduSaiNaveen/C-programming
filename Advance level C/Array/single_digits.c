#include<stdio.h>
int main(){
	int data, sum = 0, rem, temp;
	printf("Enter a number  : ");
	scanf("%d", &data);
	temp = data;
	while(temp / 10 != 0){
		rem = temp % 10;
		sum = rem+10*sum;
		temp = temp/10;
	}printf("data : %d\n", temp);
	printf("sum : %d\n", sum);
	return 0;
}
