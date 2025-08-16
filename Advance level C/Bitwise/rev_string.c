#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	int end = strlen(str) - 1;
	int st = 0;
	while(st < end){
		str[st] = str[st] ^ str[end];
		str[end] = str[st] ^ str[end];
		str[st] = str[st] ^ str[end];
		st++;
		end--;
	}printf("string : %s\n", str);
	return 0;
}
