#include<stdio.h>
#include<string.h>
void main(){
	int len, i = 0;
	char str[50];
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str) - 1;
	while(i < len){
		if(str[i] > 96 && str[i] < 123){
			str[i] = str[i] - 32;
		}i++;
	}printf("string = %s", str);
}
