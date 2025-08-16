#include<stdio.h>
void rev(int *num){
	int temp = *num, rem, sum = 0;
	while(temp != 0){
		rem = temp % 10;
		sum = sum * 10 + rem;
		temp /= 10;
	}*num = sum;
}int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	rev(&num);
	printf("revsres = %d\n", num);
	return 0;
}
