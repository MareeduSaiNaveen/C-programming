#include<stdio.h>
int main(){
	int count = 1, i = 0, j;
	char str[100];
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	while(str[i] != '\n'){
		if(str[i] == ' '){
			count++;
		}i++;
	}printf("Number of words : %d\n", count);
	return 0;
}
