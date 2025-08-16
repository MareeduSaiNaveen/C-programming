#include<stdio.h>
void rev(int *num, int *sum, int *pro){
	int temp = *num, rem;
	while(temp > 0){
		rem = temp % 10;
		if(rem % 2 == 0){
			*sum += rem;
		}else{
			*pro *= rem;
		}temp /= 10;
	}
}int main(){
	int num, pro = 1, sum = 0;
	printf("Enter a number : ");
	scanf("%d", &num);
	rev(&num, &sum, &pro);
	printf("sum =  %d\n", sum);
	printf("product =  %d\n", pro);
	return 0;
}
