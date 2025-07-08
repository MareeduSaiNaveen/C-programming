#include<stdio.h>
#include<math.h>
int length(int num){
	int len = 0;
	while (num != 0){
		len++;
		num /= 10;
	}
	return len;
}
int armstrong(int num, int len){
	int sum = 0, rem;
	int temp = num;
	while(temp != 0){
		rem = temp % 10;
		sum += pow(rem, len);
		temp /= 10;
	}
	return num == sum;
}
int main(){
	int s, e, len, i, count = 0;

	printf("Enter a number range to start : ");
	scanf("%d",&s);
	printf("Enter a number range to end : ");
	scanf("%d",&e);
	for(i = s; i <= e; i++){
		len = length(i);
		if (armstrong(i, len)){
			printf("In a range %d is armstoring\n",i);
			count++;
		}
	}
	if (count == 0)
	printf("Given range there is no armstrong\n");
	return 0;
}
