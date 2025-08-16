#include<stdio.h>
#include<string.h>
void substring(char str[]){
	int i, j, k, len;
	len = strlen(str);
	for(i = 0; i < len; i++){
		for(j = i; j < len; j++){
			for(k = i; k <= j; k++){
				printf("%c", str[k]);
			}printf("\n");
		}
	}
}int main(){
	char str[50];
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcmp(str, "\n")] = '\0';
	substring(str);
	return 0;
}
