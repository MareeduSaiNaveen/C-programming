#include<stdio.h>
#include<math.h>
int lenth(int num){
	int len=0;
	while(num != 0){
		len++;
		num /= 10;
	}
	return len;
}
int armstrong(int num,int len){
	int rem, temp, sum = 0;
	temp = num;
	while(temp != 0){
		rem = temp % 10;
		sum += pow(rem,len);
		temp /= 10;
	}
	if(sum == num)
		printf("%d is armstrong number\n",num);
	else
		printf("It is not amstrong number\n");
}
int main(){
	int num,len;
	printf("Enter a number to check : ");
	scanf("%d",&num);
	len = lenth(num);
	armstrong(num,len);
	return 0;
}
