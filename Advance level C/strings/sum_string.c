#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int num, rem, sum = 0;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcmp(str, "\n")] = '\0';
	sscanf(str, "%d", &num);
	while(num != 0){
		rem = num % 10;
		sum += rem;
		num /= 10;
	}printf("sum = %d\n", sum);
	return 0;
}
