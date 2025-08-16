#include<stdio.h>
int main(){
	int count = 0, i = 0, j;
	char arr[100];
	char str[100];
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	while(str[i] != '\n'){
		arr[i] = str[i];
		i++;
	}str[i] = '\0';
	for(j = i-1; j >= 0; j--){
		printf("%c ", arr[j]);
	}printf("\n");
	return 0;
}
