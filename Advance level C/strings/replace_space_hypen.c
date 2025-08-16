#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	printf("Enter a string  : ");
	fgets(str, sizeof(str), stdin);
	for(int i = 0; str[i]; i++){
		if(str[i] == ' '){
			str[i] = '!';
		}
	}printf("string : %a", str);
	return 0;
}
