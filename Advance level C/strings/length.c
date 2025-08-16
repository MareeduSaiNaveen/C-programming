#include<stdio.h>
int main(){
	int count = 0, i = 0;
	char str[100];
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	while(str[i] != '\n'){
		i++;
	}printf("length = %d\n", i);
	return 0;
}
